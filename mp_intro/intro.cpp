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
  PNG myWork(width, height);
  // TODO: Part 3

  for (unsigned x = 0; x < width; x++) {
    for (unsigned y = 0; y < height; y++) {
      HSLAPixel & pixel = myWork.getPixel(x, y);

      pixel.h = 360.0 * (x + y) / (width + height);
      pixel.s = 0.8;
      pixel.l = 1.0 * (x + y) / (width + height);
      pixel.a = 1.0;
    }
  }

  return myWork;
}
