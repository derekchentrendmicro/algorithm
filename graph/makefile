all: BfsDfs DijkstraPQ DijkstraDG BellmanFord FloydWarshall Prim

BfsDfs:
	g++ -g -o testBfsDfs testBfsDfs.cxx dfs.cxx bfs.cxx Graph.cxx

PQ: 
	g++ -g -o testDijkstraPQ testDijkstra.cxx Graph.cxx DijkstraPQ.cxx BinaryHeap.cxx

DG: 
	g++ -g -o testDijkstraDG testDijkstra.cxx Graph.cxx DijkstraDG.cxx

Bellman: 
	g++ -g -o testBellmanFord testDijkstra.cxx Graph.cxx bellmanFord.cxx

Floyd: 
	g++ -g -o testFloydWarshall testFloydWarshall.c Graph.cxx allPairsShortestFloyd.cxx

Prim: 
	g++ -g -o testPrim testPrim.cxx Graph.cxx Prim.cxx BinaryHeap.cxx
