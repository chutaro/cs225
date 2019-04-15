/* Your code here! */

#include <iostream>
#include "dsets.h"

using std::cout;
using std::endl;

void DisjointSets::addelements(int num) {
  for (int i = 0; i < num; i++) {
    sets_.push_back(-1);
  }
}

int DisjointSets::find(int elem) {
  if (sets_.at(elem) < 0) {
    return elem;
  } else {
    int root = find(sets_.at(elem));
    sets_.at(elem) = root;
    return root;
  }
}

void DisjointSets::setunion(int a, int b) {
  int root1 = find(a);
  int root2 = find(b);

  int newSize = sets_[root1] + sets_[root2];
  if (sets_[root1] <= sets_[root2]) {
    sets_[root2] = root1;
    sets_[root1] = newSize;
  } else {
    sets_[root1] = root2;
    sets_[root2] = newSize;
  }
}

int DisjointSets::size(int elem) {
  return -sets_[find(elem)];
}
