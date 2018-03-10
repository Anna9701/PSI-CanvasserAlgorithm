#ifndef _BRUTE_FORCE_H_
#define _BRUTE_FORCE_H_

#include <iostream>
#include "CanvasserAlgorithm.h"
#include <algorithm>
#include <limits>
#include <chrono>

using namespace std;

class BruteForce : public CanvasserAlgorithm {
private:
    const string algorithmName = ("Brute Force");
    double countShortestDistance(vector<vector<double>> *);
    vector<vector<double>>* getDistancesMatrix();
public:
    BruteForce();
    virtual double findShortestPath() override;
    string getAlgorithmName() override;
    virtual ~BruteForce() {}
};

inline BruteForce::BruteForce() : CanvasserAlgorithm() {
    srand((int)time(NULL));
}

inline string BruteForce::getAlgorithmName() {
    return algorithmName;
}

#endif
