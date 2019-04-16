/* Your code here! */

#include "cs225/PNG.h"
#include "maze.h"
#include <vector>
#include <stack>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <random>

using std::vector;
using std::stack;
using std::pair;
using std::make_pair;
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

  std::random_device rnd;
  srand(rnd());
  while (dsets_.size(0) != numOfCells) {
    int rX = rand() % width_;
    int rY = rand() % height_;
    int rWall = rand() % 2;
    // if (dsets_.size(0) > 1 && dsets_.size(0) < width_*height_-5) {
    //   cout << "current size: " << dsets_.size(0) << endl;
    //   cout << "x: " << rX << endl;
    //   cout << "y: " << rY << endl;
    // }

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
          bottoms_[rX][rY] = false;
          dsets_.setunion(current, next);
        }
      }
    }
  }
}


// dir = 0 represents a rightward step (+1 to the x coordinate)
// dir = 1 represents a downward step (+1 to the y coordinate)
// dir = 2 represents a leftward step (-1 to the x coordinate)
// dir = 3 represents an upward step (-1 to the y coordinate)
bool SquareMaze::canTravel(int x, int y, int dir) const {
  // if (x >= width_ || x < 0 || y >= height_ || y < 0 || dir < 0 || dir > 3) {
  //   return false;
  // }
  if (dir == 0) {
    if (x >= width_ - 1) {
      return false;
    }
    if (rights_[x][y]) {
      return false;
    }
    return true;
  }
  else if (dir == 1) {
    if (y >= width_ - 1) {
      return false;
    }
    if (bottoms_[x][y]) {
      return false;
    }
    return true;
  }
  else if (dir == 2) {
    if (x <= 0) {
      return false;
    }
    if (rights_[x-1][y]) {
      return false;
    }
    return true;
  }
  else {
    if (y <= 0) {
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

  vector<int> path;
  vector<int> longestPath;
  int destinationX;
  //stack< pair<int, int> > stack;

  //x, y, dir
  stack<vector<int>> stack;
  vector<vector<int>> visited(width_, vector<int>(height_, -1));

  int x = 0;
  int y = 0;
  int dir = -1;
  vector<int> start = {x, y, dir};
  stack.push(start);

  while (!stack.empty()) {
      x = stack.top()[0];
      y = stack.top()[1];
      dir = stack.top()[2];
      if (dir >= 0) {
        path.push_back(dir);
      }
      stack.pop();

      // cout << "current point: " << x << ", " << y << endl;
      // cout << "path: ";
      // for (size_t i = 0; i < path.size(); i++) {
      //   cout << path[i] << " ";
      // }
      // cout << endl;

      if (y == width_-1) {
        if (path.size() > longestPath.size()) {
          longestPath = path;
          destinationX = x;
        }
        if (path.size() == longestPath.size() && x < destinationX) {
          longestPath = path;
          destinationX = x;
        }
      }

      int potential = 0;
      if (canTravel(x, y, 0)) {
        if (visited[x+1][y] < 0) {
          vector<int> add = {x+1, y, 0};
          stack.push(add);
          potential++;
        }
      }
      if (canTravel(x, y, 1)) {
        if (visited[x][y+1] < 0) {
          vector<int> add = {x, y+1, 1};
          stack.push(add);
          potential++;
        }
      }
      if (canTravel(x, y, 2)) {
        if (visited[x-1][y] < 0) {
          vector<int> add = {x-1, y, 2};
          stack.push(add);
          potential++;
        }
      }
      if (canTravel(x, y, 3)) {
        if (visited[x][y-1] < 0) {
          vector<int> add = {x, y-1, 3};
          stack.push(add);
          potential++;
        }
      }

      if (stack.empty()) {
        break;
      }
      visited[x][y] = potential;

      if (potential == 0) {
        while (visited[x][y] < 2) {
          if (path.empty()) {
            cout << "---------path empty-----------" << endl;
            break;
          }
          if (path.back() == 0) {
            x--;
            path.pop_back();
          } else if (path.back() == 1) {
            y--;
            path.pop_back();
          } else if (path.back() == 2) {
            x++;
            path.pop_back();
          } else if (path.back() == 3) {
            y++;
            path.pop_back();
          } else {
            cout << "something wrong" << endl;
            break;
          }
        }
        visited[x][y]--;
      }
  }

  return longestPath;
}


// Draws the maze without the solution.
PNG* SquareMaze::drawMaze() const {
  PNG* out = new PNG(width_*10 + 1, height_*10 + 1);
  for (unsigned i = 0; i < out->height(); i++) {
    out->getPixel(0, i).l = 0;
  }
  for (unsigned i = 10; i < out->width(); i++) {
    out->getPixel(i, 0).l = 0;
  }

  for (int x = 0; x < width_; x++) {
    for (int y = 0; y < height_; y++) {
      if (rights_[x][y]) {
        for (unsigned k = 0; k <= 10; k++) {
          out->getPixel((x+1)*10, y*10 + k).l = 0;
        }
      }
      if (bottoms_[x][y]) {
        for (unsigned k = 0; k <= 10; k++) {
          out->getPixel(x*10 + k, (y+1)*10).l = 0;
        }
      }
    }
  }
  return out;
}

// This function calls drawMaze, then solveMaze; it modifies the PNG from
// drawMaze to show the solution vector and the exit.
PNG* SquareMaze::drawMazeWithSolution() {
  PNG* result = drawMaze();
  vector<int> solution = solveMaze();

  // cout << "result" << endl;
  // for (size_t i = 0; i < solution.size(); i++) {
  //   cout << i << ": " << solution[i] << endl;
  // }

  cs225::HSLAPixel* red = new cs225::HSLAPixel(0,1,0.5,1); // red pixel

  // initial location
  int x = 5;
  int y = 5;

  // drawing solution
  for (size_t i = 0; i < solution.size();i++) {
    if (solution[i] == 0) {
      for (int j = 0; j <= 10;j++) {
        result->getPixel(x+j,y) = *red;
      }
      x += 10;
    }
    if (solution[i] == 1) {
      for (int j = 0; j <= 10;j++) {
        result->getPixel(x,y+j) = *red;
      }
      y += 10;
    }
    if (solution[i] == 2) {
      for (int j = 0; j <= 10;j++) {
        result->getPixel(x-j,y) = *red;
      }
      x -= 10;
    }
    if (solution[i] == 3) {
      for (int j = 0; j <= 10;j++) {
        result->getPixel(x,y-j) = *red;
      }
      y -= 10;
    }
  }

  for (unsigned k = 0; k < 9; k++) {
    result->getPixel(x-4+k, y+5).l = 1;
  }

  return result;
}
