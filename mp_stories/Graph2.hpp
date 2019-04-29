#include "Graph.h"
#include "Edge.h"
#include "Vertex.h"

#include <stack>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <list>

#include <iostream>
using std::cout;
using std::endl;

/**
 * Returns an std::list of vertex keys that creates any shortest path between `start` and `end`.
 *
 * This list MUST include the key of the `start` vertex as the first vertex in the list, the key of
 * the `end` vertex as the last element in the list, and an ordered list of all vertices that must
 * be traveled along the shortest path.
 *
 * For example, the path a -> c -> e returns a list with three elements: "a", "c", "e".
 *
 * You should use undirected edges. Hint: There are no edge weights in the Graph.
 *
 * @param start The key for the starting vertex.
 * @param end   The key for the ending vertex.
 */
template <class V, class E>
std::list<std::string> Graph<V,E>::shortestPath(const std::string start, const std::string end) {
  // TODO: Part 3
  std::list<std::string> path;
  std::list<std::string> shortestPath;
  std::stack<std::string> stack;

  // if (x,y) is not visited, it is -1. Otherwise, contains potential.
  // vector<vector<int>> visited(width_, vector<int>(height_, -1));
  std::unordered_map<std::string, int> visited;
  for (auto iter = vertexMap.begin(); iter != vertexMap.end(); ++iter) {
    visited[iter->first] = -1;
  }

  stack.push(start);

  while (!stack.empty()) {
    std::string current = stack.top();
    path.push_back(current);
    stack.pop();

    if (current == end) {
      if (shortestPath.size() == 0) {
        shortestPath = path;
      } else if (path.size() < shortestPath.size()) {
        shortestPath = path;
      }
    }

    int potential = 0;
    for (edgeListIter it : adjList[current]) {
      std::string incidentKey;
      if (it->get().source().key() == current) {
        incidentKey = it->get().dest().key();
      } else {
        incidentKey = it->get().source().key();
      }
      if (visited.at(incidentKey) < 0) {
        stack.push(incidentKey);
        potential++;
      }
    }
    if (stack.empty()) {
      break;
    }
    visited.at(current) = potential;

    if (potential == 0) {
      while (visited[current] < 2) {
        path.pop_back();
        visited[current] = -1;
        current = path.back();
      }
      visited[current]--;
    }
  }

  // cout << "shortestPath:" << endl;
  // for (std::string str : shortestPath) {
  //   cout << str << endl;
  // }

  return shortestPath;
}
