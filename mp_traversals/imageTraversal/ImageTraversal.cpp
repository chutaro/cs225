#include <cmath>
#include <iterator>
#include <iostream>
#include <vector>

#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

/**
 * Calculates a metric for the difference between two pixels, used to
 * calculate if a pixel is within a tolerance.
 *
 * @param p1 First pixel
 * @param p2 Second pixel
 * @return the difference between two HSLAPixels
 */
ImageTraversal::ImageTraversal(const PNG & png, const Point & start, double tolerance) {
  png_ = png;
  start_ = start;
  tolerance_ = tolerance;
  visited_ = std::vector<std::vector<bool>>(png_.width(), std::vector<bool>(png_.height(), false));
  added_ = std::vector<std::vector<bool>>(png_.width(), std::vector<bool>(png_.height(), false));
}

double ImageTraversal::calculateDelta(const HSLAPixel & p1, const HSLAPixel & p2) {
  double h = fabs(p1.h - p2.h);
  double s = p1.s - p2.s;
  double l = p1.l - p2.l;

  // Handle the case where we found the bigger angle between two hues:
  if (h > 180) { h = 360 - h; }
  h /= 360;

  return sqrt( (h*h) + (s*s) + (l*l) );
}

/**
 * Default iterator constructor.
 */
ImageTraversal::Iterator::Iterator(ImageTraversal *traversal, bool stop) {
  /** @todo [Part 1] */
  trav_ = traversal;
  curr_ = trav_->start_;
  stop_ = stop;
}

/**
 * Iterator increment opreator.
 *
 * Advances the traversal of the image.
 */
ImageTraversal::Iterator & ImageTraversal::Iterator::operator++() {
  /** @todo [Part 1] */

  Point current = trav_->pop();
  unsigned x = current.x;
  unsigned y = current.y;
  HSLAPixel startPixel = trav_->png_.getPixel(trav_->start_.x, trav_->start_.y);

  if (x + 1 < trav_->png_.width()) {
    if (calculateDelta(trav_->png_.getPixel(x+1, y), startPixel) < trav_->tolerance_) {
      trav_->add(Point(x+1, y));
    }
  }
  if (y + 1 < trav_->png_.height()) {
    if (calculateDelta(trav_->png_.getPixel(x, y+1), startPixel) < trav_->tolerance_) {
      trav_->add(Point(x, y+1));
    }
  }
  if ((int) x - 1 >= 0) {
    if (calculateDelta(trav_->png_.getPixel(x-1, y), startPixel) < trav_->tolerance_) {
      trav_->add(Point(x-1, y));
    }
  }
  if ((int) y - 1 >= 0) {
    if (calculateDelta(trav_->png_.getPixel(x, y-1), startPixel) < trav_->tolerance_) {
      trav_->add(Point(x, y-1));
    }
  }

  if (trav_->empty()) {
    curr_ = trav_->start_;
    stop_ = true;
    return *this;
  }

  curr_ = trav_->peek();
  //std::cout << "next " << curr_ << std::endl;
  return *this;
}

/**
 * Iterator accessor opreator.
 *
 * Accesses the current Point in the ImageTraversal.
 */
Point ImageTraversal::Iterator::operator*() {
  /** @todo [Part 1] */
  return this->curr_;
}

/**
 * Iterator inequality operator.
 *
 * Determines if two iterators are not equal.
 */
bool ImageTraversal::Iterator::operator!=(const ImageTraversal::Iterator &other) {
  /** @todo [Part 1] */
  if (this->stop_ == other.stop_) {
    return false;
  }
  return true;
}
