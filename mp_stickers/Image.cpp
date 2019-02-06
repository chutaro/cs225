#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"
#include "Image.h"
#include <math.h>

using cs225::HSLAPixel;

void Image::lighten() {
  for (unsigned x = 0; x < width(); x++) {
    for (unsigned y = 0; y < height(); y++) {
      if (getPixel(x, y).l > 0.9) {
        getPixel(x, y).l = 1.0;
      } else {
        getPixel(x, y).l += 0.1;
      }
    }
  }
}

void Image::lighten(double amount) {
  for (unsigned x = 0; x < width(); x++) {
    for (unsigned y = 0; y < height(); y++) {
      if (getPixel(x, y).l > 1.0 - amount) {
        getPixel(x, y).l = 1.0;
      } else {
        getPixel(x, y).l += amount;
      }
    }
  }
}

void Image::darken() {
  for (unsigned x = 0; x < width(); x++) {
    for (unsigned y = 0; y < height(); y++) {
      if (getPixel(x, y).l < 0.1) {
        getPixel(x, y).l = 0.0;
      } else {
        getPixel(x, y).l -= 0.1;
      }
    }
  }
}

void Image::darken(double amount) {
  for (unsigned x = 0; x < width(); x++) {
    for (unsigned y = 0; y < height(); y++) {
      if (getPixel(x, y).l < amount) {
        getPixel(x, y).l = 0.0;
      } else {
        getPixel(x, y).l -= amount;
      }
    }
  }
}

void Image::saturate() {
  for (unsigned x = 0; x < width(); x++) {
    for (unsigned y = 0; y < height(); y++) {
      if (getPixel(x, y).s > 0.9) {
        getPixel(x, y).s = 1.0;
      } else {
        getPixel(x, y).s += 0.1;
      }
    }
  }
}

void Image::saturate(double amount) {
  for (unsigned x = 0; x < width(); x++) {
    for (unsigned y = 0; y < height(); y++) {
      if (getPixel(x, y).s > 1.0 - amount) {
        getPixel(x, y).s = 1.0;
      } else {
        getPixel(x, y).s += amount;
      }
    }
  }
}

void Image::desaturate() {
  for (unsigned x = 0; x < width(); x++) {
    for (unsigned y = 0; y < height(); y++) {
      if (getPixel(x, y).s < 0.1) {
        getPixel(x, y).s = 0.0;
      } else {
        getPixel(x, y).s -= 0.1;
      }
    }
  }
}

void Image::desaturate(double amount) {
  for (unsigned x = 0; x < width(); x++) {
    for (unsigned y = 0; y < height(); y++) {
      if (getPixel(x, y).s < amount) {
        getPixel(x, y).s = 0.0;
      } else {
        getPixel(x, y).s -= amount;
      }
    }
  }
}

void Image::grayscale() {
  for (unsigned x = 0; x < width(); x++) {
    for (unsigned y = 0; y < height(); y++) {
      getPixel(x, y).s = 0;
    }
  }
}
void Image::rotateColor(double degrees) {
  for (unsigned x = 0; x < width(); x++) {
    for (unsigned y = 0; y < height(); y++) {
      double temp = fmod(getPixel(x, y).h + degrees, 360);
      if (temp < 0) {
        getPixel(x, y).h = temp + 360;
      } else {
        getPixel(x, y).h = temp;
      }
    }
  }
}

void Image::illinify() {
  for (unsigned x = 0; x < width(); x++) {
    for (unsigned y = 0; y < height(); y++) {
      HSLAPixel & pixel = getPixel(x, y);
      if (pixel.h < 113.5 || pixel.h > 293.5) {
        pixel.h = 11;
      } else {
        pixel.h = 216;
      }
    }
  }
}

void Image::scale(double factor) {
  Image temp = Image(*this);
  resize(floor(factor * temp.width()), floor(factor * temp.height()));
  for (unsigned x = 0; x < width(); x++) {
    for (unsigned y = 0; y < height(); y++) {
      getPixel(x, y) = temp.getPixel(floor(x / factor), floor(y / factor));
    }
  }
}

void Image::scale(unsigned w, unsigned h) {
  double factor = w / width();
  scale(factor);
}
