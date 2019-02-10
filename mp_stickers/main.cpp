#include "Image.h"
#include "StickerSheet.h"

int main() {
  Image base, png1, png2, png3, png4, png5, png6;
  base.readFromFile("alma.png");
  png1.readFromFile("pika.png");
  png2.readFromFile("mario.png");
  png3.readFromFile("doraemon.png");
  png4.readFromFile("yossy.png");
  png5.readFromFile("splatoon.png");
  png6.readFromFile("japan.png");

  base.scale(2.0);
  png2.scale(0.4);
  png5.scale(2.0);

  StickerSheet test(base, 6);
  test.addSticker(png1, 200, 200);
  test.addSticker(png2, 1100, 200);
  test.addSticker(png3, 1000, 0);
  test.addSticker(png4, 100, 600);
  test.addSticker(png5, 450, 300);
  test.addSticker(png6, 800, 900);
  Image mine = test.render();
  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //
  mine.writeToFile("myImage.png");
  return 0;
}
