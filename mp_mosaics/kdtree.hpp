/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */
#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

template <int Dim>
bool KDTree<Dim>::smallerDimVal(const Point<Dim>& first,
                                const Point<Dim>& second, int curDim) const
{
    /**
     * @todo Implement this function!
     */
    if (first[curDim] == second[curDim]) {
      return first < second;
    }
    return first[curDim] < second[curDim];
}

template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim>& target,
                                const Point<Dim>& currentBest,
                                const Point<Dim>& potential) const
{
    /**
     * @todo Implement this function!
     */
    double currDistance = 0;
    double poteDistance = 0;
    for (int i = 0; i < Dim; i++) {
      currDistance += (currentBest[i] - target[i])*(currentBest[i] - target[i]);
      poteDistance += (potential[i] - target[i])*(potential[i] - target[i]);
    }
    if (poteDistance == currDistance) {
      return potential < currentBest;
    }
    return poteDistance < currDistance;
}

template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>>& newPoints)
{
    /**
     * @todo Implement this function!
     */
    root = build_(newPoints, 0, newPoints.size()-1, 0);
}

//helper function to partition the given vector.
template <int Dim>
int KDTree<Dim>::partition_(vector<Point<Dim>> &inputs, int start, int end, int dim) {

  int pivotIdx = (start + end) / 2;
  int storeIdx = start;
  swap(inputs[pivotIdx], inputs[end]);

  for (int i = start; i < end; i++) {
    if (smallerDimVal(inputs[i], inputs[end], dim)) {
      swap(inputs[i], inputs[storeIdx]);
      storeIdx++;
    }
  }
  swap(inputs[end], inputs[storeIdx]);
  return storeIdx;
}

// helper function to find midian point.
template <int Dim>
Point<Dim> KDTree<Dim>::selectMid_(vector<Point<Dim>> &inputs, int start, int end, int midIdx, int dim) {
  if (start == end) {
    return inputs[start];
  }

  int pivotIdx = partition_(inputs, start, end, dim);
  if (midIdx == pivotIdx) {
    return inputs[midIdx];
  } else if (midIdx < pivotIdx) {
    return selectMid_(inputs, start, pivotIdx-1, midIdx, dim);
  } else {
    return selectMid_(inputs, pivotIdx+1, end, midIdx, dim);
  }
}

// helper function to build kdtree recursively.
template <int Dim>
typename KDTree<Dim>::KDTreeNode* KDTree<Dim>::build_(vector<Point<Dim>> inputs, int start, int end, int dim) {

  // check if it's empty
  if (inputs.empty()) {
    return new KDTreeNode();
  }

  int midIdx = (start + end) / 2;
  Point<Dim> mid = selectMid_(inputs, 0, inputs.size() - 1, midIdx, dim);
  KDTreeNode *current = new KDTreeNode(mid);
  std::cout << "made a Node: " << mid << " dim: " << dim << std::endl;

  // base case
  if (start == end) {
    std::cout << "base case: " << mid << " dim: " << dim << std::endl;
    return current;
  }

  // else
  dim = (dim + 1) % Dim;
  if (start <= midIdx-1) {
    current->left = build_(inputs, start, midIdx-1, dim);
  }
  if (end >= midIdx+1) {
    current->right = build_(inputs, midIdx+1, end, dim);
  }
  return current;
}

template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other) {
  /**
   * @todo Implement this function!
   */

}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  /**
   * @todo Implement this function!
   */

  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree() {
  /**
   * @todo Implement this function!
   */
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */
    Point<Dim> currBest = root->point;
    return help_neighbor_(query, root, currBest, 0);
}

template <int Dim>
Point<Dim> KDTree<Dim>::help_neighbor_(const Point<Dim>& query, KDTreeNode *current, Point<Dim> currBest, int dim) const {
  if (current == NULL) {
    return currBest;
  }

  if (current->left == NULL && current->right == NULL) {
    if (shouldReplace(query, currBest, current->point)) {
      std::cout << "leaf: " << current->point << std::endl;
      return current->point;
    }
    return currBest;
  }

  if (smallerDimVal(query, current->point, dim)) {
    std::cout << "left: " << current->point << std::endl;
    currBest = help_neighbor_(query, current->left, currBest, (dim+1)%Dim);
    if (shouldReplace(query, currBest, current->point)) {
      currBest = current->point;
    }

    double radiusSq = distanceSq(currBest, query);
    if ((current->point[dim] - query[dim])*(current->point[dim] - query[dim]) < radiusSq) {
      currBest = help_neighbor_(query, current->right, currBest, (dim+1)%Dim);
    }

  } else {
    std::cout << "right: " << current->point << std::endl;
    currBest = help_neighbor_(query, current->right, currBest, (dim+1)%Dim);
    if (shouldReplace(query, currBest, current->point)) {
      currBest = current->point;
    }
    double radiusSq = distanceSq(currBest, query);
    if ((current->point[dim] - query[dim])*(current->point[dim] - query[dim]) < radiusSq) {
      currBest = help_neighbor_(query, current->left, currBest, (dim+1)%Dim);
    }
  }
  std::cout << "current: " << current->point << "currBest" << currBest << std::endl;
  return currBest;

}

template <int Dim>
double KDTree<Dim>::distanceSq(const Point<Dim> first, const Point<Dim> second) const {
  double result = 0;
  for (int i = 0; i < Dim; i++) {
    result += (first[i] - second[i])*(first[i] - second[i]);
  }
  return result;
}
