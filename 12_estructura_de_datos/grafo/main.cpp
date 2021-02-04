#include <iostream>
#include "Graph.h"

using namespace std;

int main() {

    vector<int> start;
    start.push_back(1);
    start.push_back(1);
    start.push_back(1);
    start.push_back(5);
    start.push_back(5);
    start.push_back(4);

    vector<int> end;
    end.push_back(2);
    end.push_back(3);
    end.push_back(4);
    end.push_back(4);
    end.push_back(2);
    end.push_back(2);

    Graph g(start, end);

    vector<int> v = g.adjacent(3);
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    

    return 0;
}