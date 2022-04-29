#include <limits.h>
#include <stdbool.h>

#include <vector>
#include <map>
#include <algorithm>

struct Graph {
    int n;
    std::vector<std::vector<unsigned int>> adjmat;//双数组 记载边
    std::vector<unsigned int> label;
    std::vector<std::vector<std::pair<std::pair<unsigned int, unsigned int>, std::vector<int>>>> leaves; //leaves -> vector(pair(edge label, vertex label), vector(leaves list))
    Graph(unsigned int n);
};

Graph induced_subgraph(struct Graph& g, std::vector<int> vv);

Graph readGraph(char* filename, char format, bool directed, bool edge_labelled, bool vertex_labelled);

