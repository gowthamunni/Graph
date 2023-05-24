#pragma once
#include <vector>
void depthfirstsearch(std::vector<int>* adj_ptr, int& startnode);
void breadthfirstsearch(std::vector<int>* adj_ptr, int& startnode);
void topologicalsort(std::vector<int>* adj_ptr, int& node_num);