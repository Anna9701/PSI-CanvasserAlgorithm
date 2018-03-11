#include "BruteForce.h"

using ns = chrono::seconds;
using get_time = chrono::steady_clock;

double BruteForce::findShortestPath() {
    std::vector<vector<double>> *nodesResults = getDistancesMatrix();
    auto start = get_time::now();
    double distance = countShortestDistance(nodesResults);
    auto finish = get_time::now();
    delete nodesResults;
    auto elapsed = finish - start;
    searchTime = chrono::duration_cast<ns>(elapsed).count();
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
    int nodeNumber;
    while (nodesResults->size() > 0) {
        double min = (*nodesResults)[0][0];
        for (unsigned int i = 0; i < nodesResults->size() - 1; ++i) {
            try {
                std::vector<double> distances = (*nodesResults)[i];
                for (unsigned int j = i + 1; j < distances.size(); ++j) {
                    if (distances[j] < min) {
                        min = distances[j];
                        nodeNumber = i;
                    }
                }
            } catch (exception &ex) {
                std::cout << "Excetpion" << std::endl;
                exit(EXIT_FAILURE);
            }
        }
        shortestDistance += min;
        nodesResults->erase(nodesResults->begin() + nodeNumber);
    };
    
    return shortestDistance;
}