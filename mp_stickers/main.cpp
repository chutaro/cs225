#include "Image.h"
#include "StickerSheet.h"

int main() {
  Image base, png1, png2, png3;
  base.readFromFile("alma.png");
  png1.readFromFile("japan.png");
  png1.readFromFile("pika.png");
  png1.readFromFile("word.png");

  StickerSheet test(base, 3);
  test.addSticker(png1, 30, 30);
  test.addSticker(png2, 100, 100);
  test.addSticker(png3, 200, 200);
  Image mine = test.render();
  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //
  mine.writeToFile("myImage.png");
  return 0;
}
