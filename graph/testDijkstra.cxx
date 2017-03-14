/**
 * @file Graph/DepthFirstSearch/test3.cxx   Test Case for Depth-First Search
 * @brief 
 *   A test case
 *
 * @author George Heineman
 * @date 6/15/08
 */

#include <cassert>
#include <iostream>

#include "Graph.h"
#include "singleSourceShortest.h"

/** Within debugger, call this function to output table in figures. */
void output(vector<int> &pred, vector<int> &d, vector<int> &f) {
  int vals[] = { 0, 1, 2, 11, 10, 3, 12, 4, 13, 5, 6, 7, 8, 14, 9, 15};
  for (int i = 0; i < 16; i++) {
    int idx = vals[i];
    cout << idx << "\t" << pred[idx] << "\t" << d[idx] << "\t" << f[idx] << "\n";
  }
}



/** My example to use in Chapter 6 */
int main (int argc, char **argv) {
  int n = 6;
  int i;
  Graph g (n,true);

  g.addEdge (0, 1,  6);
  g.addEdge (0, 2,  8);
  g.addEdge (0, 3, 18);
  g.addEdge (1, 4, 11);
  g.addEdge (2, 3,  9);
  g.addEdge (4, 5,  3);
  g.addEdge (5, 2,  7);
  g.addEdge (5, 3,  4);

  vector<int> pred(g.numVertices());
  vector<int> dist(g.numVertices());

  singleSourceShortest (g, 0, dist, pred);

  for (i = 0; i < n; i++) {
    cout << i << ": " << pred[i] << "\n";
  }
  for (i = 0; i < n; i++) {
    cout << i << ": " << dist[i] << "\n";
  }
  cout << "Passed test\n";

}

