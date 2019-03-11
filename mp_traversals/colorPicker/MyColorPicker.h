#pragma once

#include <string>
using std::string;
#include "../cs225/PNG.h"
#include "ColorPicker.h"
#include "../cs225/HSLAPixel.h"
#include "../Point.h"

using namespace cs225;

/**
 * A color picker class using your own color picking algorithm
 */
class MyColorPicker : public ColorPicker {
public:
  MyColorPicker(string str);
  HSLAPixel getColor(unsigned x, unsigned y);

private:
  PNG png_;
};
