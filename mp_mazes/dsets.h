/* Your code here! */

#pragma once

#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

class DisjointSets
{

public:
  // Creates num unconnected root nodes at the end of the vector.
  void addelements(int num);

  // returnes the index of the root in which the given element resides.
  int find(int elem);

  // unifies the given two sets. the smaller set will point to the larger one. 
  void setunion(int a, int b);

  // returns the number of nodes in the up-tree containing the element.
  int size(int elem);

private:
  vector<int> sets_;

};
