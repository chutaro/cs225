//#include "cs225/PNG.h"
//#include "cs225/HSLAPixel.h"
#include "Image.h"
#include "StickerSheet.h"

StickerSheet::StickerSheet(const Image & picture, unsigned max) {
  max_ = max;
  base_ = picture;
  count_ = 0;
  stickerData_ = new Image[max_];
  x_array = new unsigned[max_];
  y_array = new unsigned[max_];
}

void StickerSheet::_copy(const StickerSheet &other) {
  max_ = other.max_;
  base_ = other.base_;
  count_ = other.count_;
  stickerData_ = new Image[max_];
  x_array = new unsigned[max_];
  y_array = new unsigned[max_];
  for (unsigned i = 0; i < max_; i++) {
    stickerData_[i] = other.stickerData_[i];
    x_array[i] = other.x_array[i];
    y_array[i] = other.y_array[i];
  }
}

void StickerSheet::_destroy() {
  delete[] stickerData_;
  delete[] x_array;
  delete[] y_array;
}

StickerSheet::~StickerSheet() {
  _destroy();
}

StickerSheet::StickerSheet(const StickerSheet &other) {
  _copy(other);
}

StickerSheet const & StickerSheet::operator=(const StickerSheet &other){
  if (this != &other) {
    _destroy();
    _copy(other);
  }
  return *this;
}

void StickerSheet::changeMaxStickers(unsigned max) {
  Image *tempS = new Image[max];
  unsigned *tempX = new unsigned[max];
  unsigned *tempY = new unsigned[max];
  for (unsigned i = 0; i < max; i++) {
    if (i < max_) {
      tempS[i] = stickerData_[i];
      tempX[i] = x_array[i];
      tempY[i] = y_array[i];
    }
  }
  _destroy();
  stickerData_ = tempS;
  x_array = tempX;
  y_array = tempY;
  max_ = max;
}

int StickerSheet::addSticker(Image &sticker, unsigned x, unsigned y) {
  if (count_ >= max_) {
    return -1;
  }
  stickerData_[count_] = sticker;
  x_array[count_] = x;
  y_array[count_] = y;
  count_++;
  return count_ - 1;
}

bool StickerSheet::translate(unsigned index, unsigned x, unsigned y) {
  if (index >= count_) {
    return false;
  }
  x_array[index] = x;
  y_array[index] = y;
  return true;
}

void StickerSheet::removeSticker(unsigned index) {
  if (index >= count_) {
    return;
  }
  for (unsigned i = index; i < count_; i++) {
    if (i == max_ - 1) {
      stickerData_[i] = Image();
      x_array[i] = 0;
      y_array[i] = 0;
    }
    stickerData_[i] = stickerData_[i + 1];
    x_array[i] = x_array[i + 1];
    y_array[i] = y_array[i + 1];
  }
  count_--;
}

Image* StickerSheet::getSticker(unsigned index) {
  if (index >= count_) {
    return NULL;
  }
  Image * output = &stickerData_[index];
  return output;
}

Image StickerSheet::render() const {
  Image output(base_);
  for (unsigned i = 0; i < count_; i++) {
    unsigned w = stickerData_[i].width();
    unsigned h = stickerData_[i].height();
    if (x_array[i] + w > output.width()) {
      output.resize(x_array[i] + w, output.height());
    }
    if (y_array[i] + h > output.height()) {
      output.resize(output.width(), y_array[i] + h);
    }
    for (unsigned x = 0; x < w; x++) {
      for (unsigned y = 0; y < h; y++) {
        if (stickerData_[i].getPixel(x, y).a != 0) {
          output.getPixel(x_array[i] + x, y_array[i] + y) = stickerData_[i].getPixel(x, y);
        }
      }
    }
  }
  return output;
}
