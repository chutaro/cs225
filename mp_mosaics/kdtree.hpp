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
}

//helper function to partition the given vector.
template <int Dim>
int KDTree<Dim>::partition_(vector<Point<Dim>> &inputs, int start, int end, int dim) {
  // std::cout << "pivot: " << inputs[pivotIdx] << std::endl;
  // std::cout << "start: " << inputs[start] << std::endl;
  // std::cout << "end: " << inputs[end] << std::endl;

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

// helper function to find mid point
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

// // helper function to construct kdtree
// template <int Dim>
// KDTree<Dim>::KDTreeNode KDTree<Dim>::construct_(vector<Point<Dim>> inputs) {
//   Point<Dim> mid = selectMid_(inputs, 0, inputs.size() - 1, )
//   KDTreeNode *current = new KDTreeNode()
// }

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

    return Point<Dim>();
}
