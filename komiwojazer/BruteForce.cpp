#include "BruteForce.h"

double BruteForce::findShortestPath() {
    std::vector<vector<double>> *nodesResults = getDistancesMatrix();
    double distance = countShortestDistance(nodesResults);
    delete nodesResults;
    return distance;
}

vector<vector<double>>* BruteForce::getDistancesMatrix() {
    std::vector<vector<double>> *nodesResults = new vector<vector<double>>();
    for (unsigned int i = 0; i < nodes.size() - 1; ++i) {
        std::vector<double> tmpResults;
        for (unsigned int j = i + 1; j < nodes.size(); ++j) {
            double distance = nodes[i].countDistance(nodes[j]);
            tmpResults.push_back(distance);
        }
        nodesResults->push_back(tmpResults);
    }
    
    return nodesResults;
}

double BruteForce::countShortestDistance(vector<vector<double>> *nodesResults) {
    double shortestDistance = 0;
    for (unsigned int i = 0; i < nodesResults->size(); ++i) {
        std::vector<double> distances = (*nodesResults)[i];
        double min = distances[0];
        for (unsigned int j = 1; j < distances.size(); ++j) {
            if (distances[j] < min) {
                min = distances[j];
            }
        }
        shortestDistance += min;
    }

    
    return shortestDistance;
}