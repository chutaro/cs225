/* Your code here! */

#pragma once

#include <vector>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::endl;

class DisjointSets
{

public:
  void addelements(int num);
  int find(int elem);
  void setunion(int a, int b);
  int size(int elem);

private:
  vector<int> sets_;

};
