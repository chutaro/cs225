#include "Graph.h"
#include "Edge.h"
#include "Vertex.h"

#include <string>
#include <iostream>

/**
* @return The number of vertices in the Graph
*/
template <class V, class E>
unsigned int Graph<V,E>::numVertices() const {
  // TODO: Part 2
  return vertexMap.size();
}


/**
* The degree of the vertex. For directed: Sum of in-degree and out-degree
* @return Returns the degree of a given vertex.
* @param v Given vertex to return degree.
*/
template <class V, class E>
unsigned int Graph<V,E>::degree(const V & v) const {
  // TODO: Part 2
  // if (vertexMap.contains(v.key())) {
  //   return adjList[v.key()].size();
  // }
  return adjList.at(v.key()).size();
}


/**
* Inserts a Vertex into the Graph.
* @param key The key of the Vertex to insert
* @return The inserted Vertex
*/
template <class V, class E>
V & Graph<V,E>::insertVertex(std::string key) {
  // TODO: Part 2
  V & v = *(new V(key));
  vertexMap.insert({key, v});
  return v;
}


/**
* Removes a given Vertex
* @param v The Vertex to remove
*/
template <class V, class E>
void Graph<V,E>::removeVertex(const std::string & key) {
  // TODO: Part 2
  for (edgeListIter it : adjList[key]) {
    std::string incidentKey;
    if (it->get().source().key() == key) {
      incidentKey = it->get().dest().key();
    } else {
      incidentKey = it->get().source().key();
    }
    adjList[incidentKey].remove(it);
    // for (edgeListIter edge : adjList[incidentKey]) {
    //   if (*edge == *it) {
    //     adjList[incidentKey];
    //     break;
    //   }
    // }
    edgeList.erase(it);
  }
  adjList.erase(key);
  vertexMap.erase(key);
}


/**
* Inserts an Edge into the Graph.
* @param v1 The source Vertex
* @param v2 The destination Vertex
* @return The inserted Edge
*/
template <class V, class E>
E & Graph<V,E>::insertEdge(const V & v1, const V & v2) {
  // TODO: Part 2
  E & e = *(new E(v1, v2));
  edgeList.push_front(e);
  adjList[v1.key()].push_front(edgeList.begin());
  adjList[v2.key()].push_front(edgeList.begin());

  return e;
}


/**
* Removes an Edge from the Graph. Consider both the undirected and directed cases.
* min(degree(key1), degree(key2))
* @param key1 The key of the source Vertex
* @param key2 The key of the destination Vertex
*/
template <class V, class E>
void Graph<V,E>::removeEdge(const std::string key1, const std::string key2) {
  // TODO: Part 2
  for (edgeListIter it : adjList.at(key1)) {
    if (it->get().dest().key() == key2) {
      adjList[key1].remove(it);
      adjList[key2].remove(it);
      edgeList.erase(it);
      break;
    }
    if (it->get().source().key() == key2) {
      if (!it->get().directed()) {
        adjList[key1].remove(it);
        adjList[key2].remove(it);
        edgeList.erase(it);
        break;
      }
    }
  }
}


/**
* Removes an Edge from the Graph given by the location of the given iterator into the edge list.
* @param it An iterator at the location of the Edge that
* you would like to remove
*/
template <class V, class E>
void Graph<V,E>::removeEdge(const edgeListIter & it) {
  // TODO: Part 2
  adjList[it->get().source().key()].remove(it);
  adjList[it->get().dest().key()].remove(it);
  edgeList.erase(it);
}


/**
* Return the list of incident edges from a given vertex.
* For the directed case, consider all edges that has the vertex as either a source or destination.
* @param key The key of the given vertex
* @return The list edges (by reference) that are adjacent to the given vertex
*/
template <class V, class E>
const std::list<std::reference_wrapper<E>> Graph<V,E>::incidentEdges(const std::string key) const {
  // TODO: Part 2
  std::list<std::reference_wrapper<E>> edges;
  for (edgeListIter it : adjList.at(key)) {
    edges.push_front(*it);
  }
  return edges;
}


/**
* Return whether the two vertices are adjacent to one another. Consider both the undirected and directed cases.
* When the graph is directed, v1 and v2 are only adjacent if there is an edge from v1 to v2.
* @param key1 The key of the source Vertex
* @param key2 The key of the destination Vertex
* @return True if v1 is adjacent to v2, False otherwise
*/
template <class V, class E>
bool Graph<V,E>::isAdjacent(const std::string key1, const std::string key2) const {
  // TODO: Part 2
  if (adjList.at(key1).size() < adjList.at(key2).size()) {
    for (edgeListIter it : adjList.at(key1)) {
      if (it->get().dest().key() == key2) {
        return true;
      }
      if (it->get().source().key() == key2) {
        if (!it->get().directed()) {
          return true;
        }
      }
    }
  } else {
    for (edgeListIter it : adjList.at(key2)) {
      if (it->get().source().key() == key1) {
        return true;
      }
      if (it->get().dest().key() == key1) {
        if (!it->get().directed()) {
          return true;
        }
      }
    }
  }
  return false;
}
