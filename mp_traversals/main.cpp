
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

  PNG png;      png.readFromFile("illinois.png");

  FloodFilledImage image(png);
  BFS red1(png, Point(50, 150), 0.2);
  BFS red2(png, Point(50, 75), 0.2);
  BFS red3(png, Point(80, 150), 0.2);
  BFS red4(png, Point(100, 200), 0.2);
  BFS red5(png, Point(70, 40), 0.2);
  BFS red6(png, Point(100, 75), 0.2);
  BFS red7(png, Point(140, 170), 0.2);
  BFS red8(png, Point(160, 200), 0.2);
  // BFS bfs2(png, Point(450, 175), 0.2);
  // BFS bfs2(png, Point(450, 175), 0.2);
  // BFS bfs2(png, Point(450, 175), 0.2);
  // BFS bfs2(png, Point(450, 175), 0.2);
  // BFS bfs2(png, Point(450, 175), 0.2);
  // BFS bfs2(png, Point(450, 175), 0.2);
  HSLAPixel red(0, 1, 0.5);
  HSLAPixel blue(240, 1, 0.5);
  HSLAPixel green(120, 1, 0.5);
  SolidColorPicker reds(red);
  SolidColorPicker blues(blue);
  SolidColorPicker greens(green);
  image.addFloodFill( red1, reds );
  image.addFloodFill( red2, reds );
  image.addFloodFill( red3, reds );
  image.addFloodFill( red4, reds );
  image.addFloodFill( red5, reds );
  image.addFloodFill( red6, reds );
  image.addFloodFill( red7, reds );
  image.addFloodFill( red8, reds );


  // PNG png;       png.readFromFile("world_map.png");
  //
  // FloodFilledImage image(png);
  // DFS dfs(png, Point(100, 100), 0.05);
  // HSLAPixel color(231, 1, 0.5);
  // SolidColorPicker solid(color);
  // image.addFloodFill( dfs, solid );

  Animation animation = image.animate(1000);

  PNG lastFrame = animation.getFrame( animation.frameCount() - 1 );
  lastFrame.writeToFile("myFloodFill.png");
  animation.write("myFloodFill.gif");

  return 0;
}
