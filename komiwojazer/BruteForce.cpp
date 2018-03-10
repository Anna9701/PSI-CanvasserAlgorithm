#include "BruteForce.h"

double BruteForce::findShortestPath() {
    std::vector<vector<double>> nodesResults;
    for (unsigned int i = 0; i < nodes.size() - 1; ++i) {
        std::vector<double> tmpResults;
        for (unsigned int j = i + 1; j < nodes.size(); ++j) {
            double distance = nodes[i].countDistance(nodes[j]);
            tmpResults.push_back(distance);
        }
        nodesResults.push_back(tmpResults);
    }
    
    double shortestDistance = 0;
    int nodeNumber;
    while (nodesResults.size() > 0) {
        double min = nodesResults.at(0).at(0);
        for (unsigned int i = 0; i < nodesResults.size() - 1; ++i) {
            try {
                std::vector<double> distances = nodesResults.at(i);
                for (unsigned int j = i + 1; j < distances.size(); ++j) {
                    if (distances.at(j) < min) {
                        min = distances.at(j);
                        nodeNumber = i;
                    }
                }
            } catch (exception &ex) {
                std::cout << "Excetpion" << std::endl;
                exit(EXIT_FAILURE);
            }
        }
        shortestDistance += min;
        nodesResults.erase(nodesResults.begin() + nodeNumber);
    };
    
    return shortestDistance;
}