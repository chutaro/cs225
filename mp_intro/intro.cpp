#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

#include <string>
using namespace cs225;


void rotate(std::string inputFile, std::string outputFile) {
  // TODO: Part 2
  PNG* input = new PNG();
  input->readFromFile(inputFile);
  unsigned int width = input->width();
  unsigned int height = input->height();
  PNG* output = new PNG(width, height);

  for (unsigned x = 0; x < width; x++) {
    for (unsigned y = 0; y < height; y++) {
      output->getPixel(x, y) = input->getPixel(width - 1 - x, height - 1 - y);
    }
  }
  output->writeToFile(outputFile);
}

PNG myArt(unsigned int width, unsigned int height) {
  PNG png(width, height);
  // TODO: Part 3
  PNG* input = new PNG();
  input->readFromFile("in_01.png");
  for (unsigned x = 0; x < width; x++) {
    for (unsigned y = 0; y < height; y++) {
      png.getPixel(x, y).h = input->getPixel(x, y).h;
      png.getPixel(x, y).s = input->getPixel(x, y).s;
      png.getPixel(x, y).l = input->getPixel(x, y).l;
      png.getPixel(x, y).a = input->getPixel(x, y).a;
    }
  }
  return png;
}
