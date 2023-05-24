#include <iostream>
#include <vector>
#include <list>
#include "graph.h"


UnDirectedGraph::UnDirectedGraph(int& values){
	nodes = values;
	adjlst = new std::vector<int> [values];
	}

void UnDirectedGraph::add_edge_between(int thisnode, int thatnode){
	adjlst[thisnode].push_back(thatnode);
	adjlst[thatnode].push_back(thisnode);
  }
  
void UnDirectedGraph::list_iterator(){
	for (int i = 0; i < nodes; i++){
		std::cout << "array index: " << i << " [ ";
	
	for (auto neigbr : adjlst[i]){
		
		std::cout << neigbr << ", ";
		}
		
	std::cout << "]" << std::endl;
	}
}

std::vector<int>* UnDirectedGraph::get_adjlist(){
	
	return adjlst;
	}

UnDirectedGraph::~UnDirectedGraph(){
	delete[] adjlst;
}
	


DirectedGraph::DirectedGraph(int& values){
	nodes = values;
	adjlst = new std::vector<int> [values];
	}

void DirectedGraph::add_edge_between(int thisnode, int thatnode){
	
	adjlst[thisnode].push_back(thatnode);
  }
  
void DirectedGraph::list_iterator(){
	for (int i = 0; i < nodes; i++){
		std::cout << "array index: " << i << " [ ";
	
	for (auto neigbr : adjlst[i]){
		
		std::cout << neigbr << ", ";
		}
		
	std::cout << "]" << std::endl;
	}
}

std::vector<int>* DirectedGraph::get_adjlist(){
	
	return adjlst;
	}
	
DirectedGraph::~DirectedGraph(){
	delete[] adjlst;
}
