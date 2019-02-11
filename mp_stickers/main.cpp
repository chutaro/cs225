#include "Image.h"
#include "StickerSheet.h"

int main() {
  Image base, png1, png2, png3, png4, png5, png6;
  base.readFromFile("space.png");
  png1.readFromFile("pika.png");
  png2.readFromFile("mario.png");
  png3.readFromFile("doraemon.png");
  png4.readFromFile("yossy.png");
  //png5.readFromFile("splatoon.png");
  png6.readFromFile("kirby.png");

  base.scale(1.6);
  png2.scale(0.4);
  //png5.scale(2.0);
  png1.scale(0.6);

  StickerSheet test(base, 6);
  test.addSticker(png1, 400, 600);
  test.addSticker(png2, 1300, 200);
  test.addSticker(png3, 1200, 0);
  test.addSticker(png4, 2400, 1000);
  //test.addSticker(png5, 600, 50);
  test.addSticker(png6, 2200, 100);
  Image mine = test.render();
  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //
  mine.writeToFile("myImage.png");
  return 0;
}
