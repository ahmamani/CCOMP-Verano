#ifndef __GRAPH_H__
#define __GRAPH_H__

#include <map>
#include <vector>

class Graph {

    private:
        std::map< int, std::vector<int> > outgoing;

    public:
        Graph(const std::vector<int> &startPoints, const std::vector<int> &endPoints);

        int numOutput(const int nodeId) const;

        const std::vector<int> &adjacent(const int nodeId) const;
};

#endif