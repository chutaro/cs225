/* Your code here! */

#pragma once

#include "cs225/PNG.h"
#include "dsets.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;
using cs225::PNG;

class SquareMaze
{

public:
  // Creates an empty maze.
  SquareMaze();

  // Makes a new SquareMaze of the given height and width.
  void makeMaze(int width, int height);

  // This uses your representation of the maze to determine whether it is possible
  // to travel in the given direction from the square at (x, y).
  bool canTravel(int x, int y, int dir) const;

  // Sets whether or not the specified wall exists.
  void setWall(int x, int y, int dir, bool exists);

  // Solves this SquareMaze.
  vector<int> solveMaze();

  // Draws the maze without the solution.
  PNG* drawMaze() const;

  // This function calls drawMaze, then solveMaze; it modifies the PNG from
  // drawMaze to show the solution vector and the exit.
  PNG* drawMazeWithSolution();



private:
  int width_;
  int height_;
  vector<vector<bool>> rights_;
  vector<vector<bool>> bottoms_;
  DisjointSets dsets_;

};
