#include "NearestNeighbor.h"



double NearestNeighbor::findShortestPath() {
    double distance = countDistance();
    return distance;
}

double NearestNeighbor::countDistance() {
    unsigned int actualNode = 0;
    const Node firstNode (nodes[0]);
    double distance;
    Node x;
    while(nodes.size() > 1) {
        x = nodes[actualNode];
        double minimum;
        int previousNode = actualNode;
        if (actualNode != 0) {
             minimum = x.countDistance(nodes[0]);
             actualNode = 0;
        } else {
             minimum = x.countDistance(nodes[actualNode + 1]);
             ++actualNode;
        }
        for(unsigned int i = 0; i < nodes.size(); ++i) {
            if (i == actualNode)
                continue;
            double tmpDistance = x.countDistance(nodes[i]);
            if (tmpDistance < minimum && tmpDistance != 0) {
                minimum = tmpDistance;
                
                actualNode = i;
            }
        }
        nodes.erase(nodes.begin() + previousNode);
        distance += minimum;
    }
    distance += x.countDistance(firstNode);
    return distance;
}