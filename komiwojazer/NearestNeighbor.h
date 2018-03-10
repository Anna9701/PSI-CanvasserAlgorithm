#ifndef __NEAREST_NEIGHBOR_H_
#define __NEAREST_NEIGHBOR_H_

#include "CanvasserAlgorithm.h"
#include <chrono>
using namespace std;

class NearestNeighbor : public CanvasserAlgorithm {
private:
    const string algorithmName = ("Nearest neigbour");
    
    double countDistance();
public:
    NearestNeighbor() : CanvasserAlgorithm() {}
    double findShortestPath() override;
    string getAlgorithmName() override;
    virtual ~NearestNeighbor() {}
};

inline string NearestNeighbor::getAlgorithmName() {
    return algorithmName;
}

#endif