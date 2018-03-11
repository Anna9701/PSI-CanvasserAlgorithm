#include "NearestNeighbor.h"



double NearestNeighbor::findShortestPath() {
    std::vector<double> distances;
    for (unsigned int i = 0; i < nodes.size(); ++i) {
        distances.push_back(countDistance(i));
    }
    for (auto x : distances)
        std::cout << x << std::endl;
    return *(std::min_element(distances.begin(), distances.end()));
}

double NearestNeighbor::countDistance(int startNode) {
    unsigned int actualNode = startNode;
    const Node firstNode (nodes[startNode]);
    std::vector<Node> nodesCopy = nodes;
    double distance;
    Node x;
    while(nodesCopy.size() > 1) {
        x = nodesCopy[actualNode];
        double minimum;
        int previousNode = actualNode;
        if (actualNode != 0) {
             minimum = x.countDistance(nodesCopy[0]);
             actualNode = 0;
        } else {
             minimum = x.countDistance(nodesCopy[actualNode + 1]);
             ++actualNode;
        }
        for(unsigned int i = 0; i < nodesCopy.size(); ++i) {
            if (i == actualNode)
                continue;
            double tmpDistance = x.countDistance(nodesCopy[i]);
            if (tmpDistance < minimum && tmpDistance != 0) {
                minimum = tmpDistance;
                
                actualNode = i;
            }
        }
        nodesCopy.erase(nodesCopy.begin() + previousNode);
        distance += minimum;
    }
   // distance += x.countDistance(firstNode);
    return distance;
}