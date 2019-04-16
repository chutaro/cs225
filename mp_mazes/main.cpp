#include <iostream>
#include "dsets.h"
#include "maze.h"
#include "cs225/PNG.h"

using namespace std;

int main()
{
    // Write your own main here
    cs225::PNG png;
    png.readFromFile("chess.png");

    int w = png.width();
    int h = png.height();

    SquareMaze m;
    m.makeMaze(w, h);
    cs225::PNG* maze = m.drawMazeWithSolution();

    for (int i = 0; i < w; i++) {
      for (int j = 0; j < h; j++) {
        if (maze->getPixel(i,j).l != 1.0) {
          png.getPixel(i,j) = maze->getPixel(i,j);
        }
      }
    }

    png.writeToFile("creative.png");
    delete maze;

    cout << "Add your own tests here! Modify main.cpp" << endl;
    return 0;
}
