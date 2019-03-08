#include <iterator>
#include <cmath>

#include <list>
#include <queue>
#include <stack>
#include <vector>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"
#include "DFS.h"


/**
 * Initializes a depth-first ImageTraversal on a given `png` image,
 * starting at `start`, and with a given `tolerance`.
 *
 * @param png The image this DFS is going to traverse
 * @param start The start point of this DFS
 * @param tolerance If the current point is too different (difference larger than tolerance) with the start point,
 * it will not be included in this DFS
 */
DFS::DFS(const PNG & png, const Point & start, double tolerance) : ImageTraversal(png, start, tolerance) {
  /** @todo [Part 1] */
  toVisit_.push(start);
}

/**
 * Returns an iterator for the traversal starting at the first point.
 */
ImageTraversal::Iterator DFS::begin() {
  /** @todo [Part 1] */
  return ImageTraversal::Iterator(this, false);
}

/**
 * Returns an iterator for the traversal one past the end of the traversal.
 */
ImageTraversal::Iterator DFS::end() {
  /** @todo [Part 1] */
  return ImageTraversal::Iterator(this, true);
}

/**
 * Adds a Point for the traversal to visit at some point in the future.
 */
void DFS::add(const Point & point) {
  /** @todo [Part 1] */

  // check if the point was alerady visited.
  if (visited_[point.x][point.y]) {
    return;
  }
  
  // check if the point was already added to the toVisit_. If so, update it.
  if (added_[point.x][point.y]) {
    std::stack<Point> temp;
    while (!toVisit_.empty()) {
      if (point == toVisit_.top()) {
        toVisit_.pop();
        break;
      }
      temp.push(toVisit_.top());
      toVisit_.pop();
    }
    while (!temp.empty()) {
      toVisit_.push(temp.top());
      temp.pop();
    }
  }

  toVisit_.push(point);
  added_[point.x][point.y] = true;
}

/**
 * Removes and returns the current Point in the traversal.
 */
Point DFS::pop() {
  /** @todo [Part 1] */
  Point toReturn = toVisit_.top();
  toVisit_.pop();
  visited_[toReturn.x][toReturn.y] = true;
  return toReturn;
}

/**
 * Returns the current Point in the traversal.
 */
Point DFS::peek() const {
  /** @todo [Part 1] */
  return toVisit_.top();
}

/**
 * Returns true if the traversal is empty.
 */
bool DFS::empty() const {
  /** @todo [Part 1] */
  return toVisit_.empty();
}
