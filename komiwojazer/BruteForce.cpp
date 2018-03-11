#include "BruteForce.h"

double BruteForce::findShortestPath() {
 //   std::vector<vector<double>> *nodesResults = getDistancesMatrix();
    double distance = countHamiltonsTours();
  //  delete nodesResults;
    return distance;
}

double BruteForce::countHamiltonsTours() {
    shortestDistance = tourLength(nodes);
   // std::copy(nodes.begin(), nodes.end(), shortestTour.begin());
    scramble(nodes.begin(), nodes.size());
    
    return shortestDistance;
}

double BruteForce::tourLength(vector<Node> nodes) {
    double tmpDistance = 0;
    for (unsigned int i = 0; i < nodes.size(); ++i) {
        tmpDistance += nodes[i].countDistance(nodes[i+1]);
    }
    tmpDistance += nodes[nodes.size() - 1].countDistance(nodes[0]);

    return tmpDistance;
}

void BruteForce::cicruitPermutation(vector<Node>::iterator pivot, unsigned int numberOfNodes) {
    Node tmp = *pivot;
    for (unsigned int i = 0; i < numberOfNodes - 1; ++i) {
       *(pivot) = *(pivot + i);
    }
    *(pivot + numberOfNodes - 1) = tmp;
}

void BruteForce::scramble(vector<Node>::iterator pivot, unsigned int numberOfNodes) {
    if (numberOfNodes <= 1) {
        checkCombination();
        return;
    }
    for (unsigned int i = 0; i < numberOfNodes; ++i) {
        vector<Node>::iterator nextPivot = pivot + 1;
        scramble(nextPivot, numberOfNodes - 1);
        cicruitPermutation(pivot, numberOfNodes);
    }
} 

void BruteForce::checkCombination() {
    double length = tourLength(nodes);
    if (length < shortestDistance) {
        shortestDistance = length;
     //   std::copy(nodes.begin(), nodes.end(), shortestTour.begin());
    }
}