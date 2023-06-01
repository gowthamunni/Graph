#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

bool find(std::vector<int> traversed, int& search_element){
	for (auto element: traversed){
		if (element == search_element){
			return true;
		}
	}
	return false;
}

void depthfirstsearch(std::vector<int>* graph, int& startnode){
	
	std::cout << "Depth wise Traversal: ";
	std::list<int> stack;
	std::vector<int> traversed;
	stack.push_back(startnode);
	
	while (!stack.empty()){
		int popped = stack.back();
		traversed.push_back(popped);
		std::cout << popped << " ";
		stack.pop_back();
		for (auto neigbr :graph[popped]){
			if(!(find(traversed, neigbr))){ 
				stack.push_back(neigbr);
				
				}
			}
			}
	}
	
	

void breadthfirstsearch(std::vector<int>* graph, int& startnode){
	
	std::cout << "Breadth wise Traversal: ";
	std::list<int> que;
	std::vector<int> traversed;
	que.push_back(startnode);
	while (!que.empty()){
		int popped = que.front();
		traversed.push_back(popped);
		std::cout << popped << " ";
		que.pop_front();
		for (auto neigbr :graph[popped]){
			if(!(find(traversed, neigbr))){ 
				que.push_back(neigbr);
				
				}
			}
		}
	}
	
	
	
void topologicalsort(std::vector<int>* adj_ptr, int& node_num){
	
	std::cout << "Topological Sort: ";
	int in_connections[node_num] = {0};
	
	//setting the in_connections
	int idx = 0;
	while (idx < node_num){
		for (auto neigbr = (*(adj_ptr+idx)).begin(); neigbr!=(*(adj_ptr+idx)).end();neigbr++){ 
			in_connections[*neigbr] += 1;
		}
		idx += 1;
	}
	
	// adding the nodes with in_connections = 0 to no dependecies queue.
	std::list<int> no_dependencylist;
	for (int node = 0 ; node < node_num; node++){
		if (in_connections[node] == 0){
			no_dependencylist.push_back(node);
		}
	}
	
	std::vector<int> topsort_order;
	while (!no_dependencylist.empty()){
		int popped = no_dependencylist.front();
		topsort_order.push_back(popped);
		std::cout << popped << " ";
		no_dependencylist.pop_front();
		// reducing in_connections and appending to no dependency list if in_connection is 0.
		for (auto neigbr = (*(adj_ptr+popped)).begin(); neigbr!=(*(adj_ptr+popped)).end();neigbr++){
			in_connections[*neigbr] -= 1;
			if (in_connections[*neigbr] == 0){
				no_dependencylist.push_back(*neigbr);
			}
				
				}
			}
			}