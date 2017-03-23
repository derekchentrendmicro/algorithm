all: BfsDfs DijkstraPQ DijkstraDG BellmanFord FloydWarshall Prim

BfsDfs:
	g++ -g -o testBfsDfs testBfsDfs.cxx dfs.cxx bfs.cxx Graph.cxx

DijkstraPQ: 
	g++ -g -o testDijkstraPQ testDijkstra.cxx Graph.cxx DijkstraPQ.cxx BinaryHeap.cxx

DijkstraDG: 
	g++ -g -o testDijkstraDG testDijkstra.cxx Graph.cxx DijkstraDG.cxx

BellmanFord: 
	g++ -g -o testBellmanFord testDijkstra.cxx Graph.cxx bellmanFord.cxx

FloydWarshall: 
	g++ -g -o testFloydWarshall testFloydWarshall.c Graph.cxx allPairsShortestFloyd.cxx

Prim: 
	g++ -g -o testPrim testPrim.cxx Graph.cxx Prim.cxx BinaryHeap.cxx
