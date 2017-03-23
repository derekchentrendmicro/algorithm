/**
 * @file smallTest.cxx   Small test case for MST
 * @brief 
 *   A test case.
 *
 * @author George Heineman
 * @date 6/15/08
 */

#include <cassert>
#include <iomanip>
#include <iostream>
#include "Prim.h"

/** Example to use in Chapter 6 */
int main (int argc, char **argv) {

  if (argc == 1) {
    cout << "usage: " << argv[0] << " <graph.dat>\n";
    return(-1);
  }

  Graph  graph (0);

  graph.load (argv[1]);
  int n = graph.numVertices();
  cout << "loaded graph with " << n << " vertices\n";

  vector<int> pred(n);

  mst_prim (graph, pred);

  for (int i = 0; i < n; i++) {
    cout << setw(2) << i << "| ";
  }
  cout << "\n";
  for (int i = 0; i < n; i++) {
    cout << setw(2) << pred[i] << "| ";
  }
  cout << "\n";

  return 0;
}

