#include <stdexcept>
#include "Graph.h"

using namespace std;

Graph::Graph(const std::vector<int> &startPoints, 
                const std::vector<int> &endPoints) {
                    
    if(startPoints.size() != endPoints.size())
        throw invalid_argument("Start/End point lists differ in length");
    
    for(unsigned int i = 0; i < startPoints.size(); i++) {
        int start = startPoints[i], end = endPoints[i];
        outgoing[start].push_back(end);
        outgoing[end];
    }
}

int Graph::numOutput(const int nodeId) const {
    return adjacent(nodeId).size();
}

const std::vector<int> &Graph::adjacent(const int nodeId) const {
    std::map<int, std::vector<int>>::const_iterator i = outgoing.find(nodeId);

    if(i == outgoing.end()){
        throw invalid_argument("Invalid node ID");
    }

    return i->second;
}