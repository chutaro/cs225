
#include "cs225/PNG.h"
#include "FloodFilledImage.h"
#include "Animation.h"

#include "imageTraversal/DFS.h"
#include "imageTraversal/BFS.h"

#include "colorPicker/RainbowColorPicker.h"
#include "colorPicker/GradientColorPicker.h"
#include "colorPicker/GridColorPicker.h"
#include "colorPicker/SolidColorPicker.h"
#include "colorPicker/MyColorPicker.h"

using namespace cs225;

int main() {

  // @todo [Part 3]
  // - The code below assumes you have an Animation called `animation`
  // - The code provided below produces the `myFloodFill.png` file you must
  //   submit Part 3 of this assignment -- uncomment it when you're ready.

  PNG png;
  png.readFromFile("usa.png");

  FloodFilledImage image(png);
  BFS left(png, Point(20, 300), 0.2);
  BFS top(png, Point(300, 10), 0.2);
  BFS top2(png, Point(5, 5), 0.2);
  BFS right(png, Point(500, 200), 0.2);
  BFS up(png, Point(300, 80), 0.2);
  BFS down(png, Point(350, 400), 0.2);

  HSLAPixel yellow(45, 1, 0.5);
  HSLAPixel blue(240, 1, 0.5);
  SolidColorPicker yellows(yellow);
  SolidColorPicker blues(blue);

  MyColorPicker sea("sea.png");
  MyColorPicker flag("flag.png");
  MyColorPicker canyon("canyon.png");
  MyColorPicker trump("trump.png");

  image.addFloodFill( left, sea );
  image.addFloodFill( top, flag );
  image.addFloodFill( down, sea );
  image.addFloodFill( top2, flag );
  image.addFloodFill( right, canyon );
  image.addFloodFill( up, trump );

  Animation animation = image.animate(10000);

  PNG lastFrame = animation.getFrame( animation.frameCount() - 1 );
  lastFrame.writeToFile("myFloodFill.png");
  animation.write("myFloodFill.gif");

  return 0;
}
