#ifndef _BRUTE_FORCE_H_
#define _BRUTE_FORCE_H_

#include <iostream>
#include "CanvasserAlgorithm.h"
#include <algorithm>
#include <limits>
#include <chrono>

using namespace std;
using ns = chrono::seconds;
using get_time = chrono::steady_clock;

class BruteForce : public CanvasserAlgorithm {
private:
    vector<Node> shortestTour;
    double shortestDistance = (0);
    const string algorithmName = ("Brute Force");
    
    double countHamiltonsTours();
    double tourLength(vector<Node>);
    void cicruitPermutation(vector<Node>::iterator, unsigned int);
    void scramble(vector<Node>::iterator, unsigned int);
    void checkCombination();
    double countShortestDistance(vector<vector<double>> *);
    vector<vector<double>>* getDistancesMatrix();
public:
    BruteForce() : CanvasserAlgorithm() {}
    virtual double findShortestPath() override;
    virtual string getAlgorithmName() override;
    virtual ~BruteForce() {}
};

inline string BruteForce::getAlgorithmName() {
    return algorithmName;
}

#endif
