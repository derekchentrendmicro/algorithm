/**
 * @file Graph/DepthFirstSearch/test3.cxx   Test Case for Depth-First Search
 * @brief 
 *   A test case
 *
 * @author George Heineman
 * @date 6/15/08
 */

#include <stdio.h>
#include <cassert>
#include <iostream>

#include "Graph.h"
#include "dfs.h"
#include "bfs.h"

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
  int n = 16;
  int i,j;
  Graph g (0);

  if (argc == 1) {
      printf ("usage: %s <graph>\n",argv[0]);
  } else {
      g.load(argv[1]);
      n =  g.numVertices();
      printf ("loaded graph with %d vertices\n", n);
  }

  for (i = 0; i < 2; i++) {
    vector<int> pred(g.numVertices());
    vector<int> dist(g.numVertices());

    if (i==0){
        cout << "==== DFS ====\n";
        dfsSearch (g, 0, pred);
    }else {
        cout << "==== BFS ====\n";
        bfsSearch (g, 0, dist, pred);
    }
     
    for (j = 0; j < n; j++) {
      cout << j << ": " << pred[j] << "\n";
    }
  }
}

