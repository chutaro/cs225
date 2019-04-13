/* Your code here! */

#include "cs225/PNG.h"
#include "maze.h"
#include <vector>
#include <iostream>
#include <stdlib.h>

using std::vector;
using std::cout;
using std::endl;
using cs225::PNG;

SquareMaze::SquareMaze() {

}

// Makes a new SquareMaze of the given height and width.
void SquareMaze::makeMaze(int width, int height) {

  width_ = width;
  height_ = height;
  rights_ = vector<vector<bool>>(width_, vector<bool>(height_, true));
  bottoms_ = vector<vector<bool>>(width_, vector<bool>(height_, true));

  int numOfCells = width_ * height_;
  dsets_.addelements(numOfCells);

  while (dsets_.size(50) != numOfCells) {

    int rX = rand() % width_;
    int rY = rand() % height_;
    int rWall = rand() % 2;

    if (dsets_.size(0) > 1 && dsets_.size(0) < width_*height_-5) {
      cout << "current size: " << dsets_.size(24) << endl;
      cout << "x: " << rX << endl;
      cout << "y: " << rY << endl;
    }

    if (rWall == 0) {
      // check if the wall exists, (true)
      if (rights_[rX][rY]) {
        // check if the cell is on the edge,
        if (rX == width_-1) {
          continue;
        }

        int current = width_*rY + rX;
        int next = width_*rY + rX+1;
        // check if there are no risk of generating a cycle,
        if (dsets_.find(current) != dsets_.find(next)) {
          rights_[rX][rY] = false;
          dsets_.setunion(current, next);
        }
      }

    } else {
      // check if the wall exists, (true)
      if (bottoms_[rX][rY]) {
        // check if the cell is on the edge,
        if (rY == height_-1) {
          continue;
        }

        int current = width_*rY + rX;
        int next = width_*(rY+1) + rX;
        // check if there are no risk of generating a cycle,
        if (dsets_.find(current) != dsets_.find(next)) {
          rights_[rX][rY] = false;
          dsets_.setunion(current, next);
        }
      }
    }
  }
  // now it's done
}


// dir = 0 represents a rightward step (+1 to the x coordinate)
// dir = 1 represents a downward step (+1 to the y coordinate)
// dir = 2 represents a leftward step (-1 to the x coordinate)
// dir = 3 represents an upward step (-1 to the y coordinate)
bool SquareMaze::canTravel(int x, int y, int dir) const {
  if (x >= width_ || x < 0 || y >= height_ || y < 0 || dir < 0 || dir >= 3) {
    return false;
  }
  if (dir == 0) {
    if (x == width_ - 1) {
      return false;
    }
    if (rights_[x][y]) {
      return false;
    }
    return true;
  }
  else if (dir == 1) {
    if (y == width_ - 1) {
      return false;
    }
    if (bottoms_[x][y]) {
      return false;
    }
    return true;
  }
  else if (dir == 2) {
    if (x == 0) {
      return false;
    }
    if (rights_[x-1][y]) {
      return false;
    }
    return true;
  }
  else {
    if (y == 0) {
      return false;
    }
    if (bottoms_[x][y-1]) {
      return false;
    }
    return true;
  }
}

// Sets whether or not the specified wall exists.
void SquareMaze::setWall(int x, int y, int dir, bool exists) {
  if (dir == 0) {
    rights_[x][y] = exists;
  } else {
    bottoms_[x][y] = exists;
  }
}

// Solves this SquareMaze.
vector<int> SquareMaze::solveMaze() {
  int max = 0;
  vector<int> test;
  return test;
}


// Draws the maze without the solution.
PNG* SquareMaze::drawMaze() const {
  PNG* test = new PNG();
  return test;
}

// This function calls drawMaze, then solveMaze; it modifies the PNG from
// drawMaze to show the solution vector and the exit.
PNG* SquareMaze::drawMazeWithSolution() {
  PNG* test = new PNG();
  return test;
}
