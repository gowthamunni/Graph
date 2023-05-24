#include <iostream>
#include "graph.h"
#include "dclrforgraph.h"



int main(){
	int vertices = 10;
	UnDirectedGraph DFS_graph(vertices);
	DFS_graph.add_edge_between(0, 1);
	DFS_graph.add_edge_between(0, 2);
	DFS_graph.add_edge_between(0, 3);
	DFS_graph.add_edge_between(0, 4);
	DFS_graph.add_edge_between(1, 5);
	DFS_graph.add_edge_between(1, 6);
	DFS_graph.add_edge_between(2, 7);
	DFS_graph.add_edge_between(3, 8);
	DFS_graph.add_edge_between(4, 9);

	DFS_graph.list_iterator();
	
	std::vector<int>* ptr = DFS_graph.get_adjlist();
	int start = 0;
	
	//depthfirstsearch(ptr, start);
	breadthfirstsearch(ptr, start);
	}

//int main(){
//	
//	int vertices = 6;
//	DirectedGraph Top_Graph(vertices);
//	Top_Graph.add_edge_between(5, 0);
//	Top_Graph.add_edge_between(5, 2);
//	Top_Graph.add_edge_between(4, 0);
//	Top_Graph.add_edge_between(4, 1);
//	Top_Graph.add_edge_between(2, 3);
//	Top_Graph.add_edge_between(3, 1);
//	Top_Graph.list_iterator();
//	std::vector<int>* ptr = Top_Graph.get_adjlist();
//	
//	topologicalsort(ptr, vertices);
//	}