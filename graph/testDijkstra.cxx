/**
 * @file Graph/DepthFirstSearch/test3.cxx   Test Case for Depth-First Search
 * @brief 
 *   A test case
 *
 * @author George Heineman
 * @date 6/15/08
 */

#include <cassert>
#include <iomanip>
#include <iostream>
#include <stdlib.h>

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
  int i,s = 0;

  if (argc == 1) {
    cout << "usage: " << argv[0] << " <graph.dat>\n";
    return(-1);
  }else if (argc > 2){
    s = atoi(argv[2]);
  }

  Graph  g (0);

  g.load (argv[1]);
  int n = g.numVertices();
  cout << "loaded graph with " << n << "vertices\n";

  vector<int> pred(g.numVertices());
  vector<int> dist(g.numVertices());

  singleSourceShortest (g, s, dist, pred);

  cout << "start from " << s << "\n     ";
  for (i = 0; i < n; i++) {
      cout << setw(2) << i << "| ";
  }
  cout << "\npred ";
  for (i = 0; i < n; i++) {
      cout << setw(2) << pred[i] << "| ";
  }
  cout << "\ndist ";
  for (i = 0; i < n; i++) {
      cout << setw(2) << dist[i] << "| ";
  }
  cout << "\n";

}

