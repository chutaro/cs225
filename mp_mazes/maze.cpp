/* Your code here! */

#include "cs225/PNG.h"
#include "maze.h"
#include <iostream>

using std::cout;
using std::endl;

SquareMaze::SquareMaze() {

}

// Makes a new SquareMaze of the given height and width.
void SquareMaze::makeMaze(int width, int height) {
  width_ = width;
  height_ = height;
  rights_ = new bool[width_][height_];
  bottoms_ = new bool[width_][height_];
}

// This uses your representation of the maze to determine whether it is possible
// to travel in the given direction from the square at (x, y).
bool SquareMaze::canTravel(int x, int y, int dir) const;

// Sets whether or not the specified wall exists.
void SquareMaze::setWall(int x, int y, int dir, bool exists);

// Solves this SquareMaze.
vector<int> SquareMaze::solveMaze();

// Draws the maze without the solution.
PNG* SquareMaze::drawMaze() const;

// This function calls drawMaze, then solveMaze; it modifies the PNG from
// drawMaze to show the solution vector and the exit.
PNG* SquareMaze::drawMazeWithSolution();
