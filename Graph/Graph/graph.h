#pragma once
#include <iostream>
#include <vector>
#include <list>

class UnDirectedGraph{
	
	int nodes;
public:
	std::vector<int>* adjlst;
	
	UnDirectedGraph(int& values);
	
	void add_edge_between(int thisnode, int thatnode);
	void list_iterator();
	std::vector<int>* get_adjlist();
	
	~UnDirectedGraph();
		
};

class DirectedGraph{
	
	int nodes;
public:
	std::vector<int>* adjlst;
	
	DirectedGraph(int& values);
	
	void add_edge_between(int thisnode, int thatnode);
	void list_iterator();
	std::vector<int>* get_adjlist();

	~DirectedGraph();
};
