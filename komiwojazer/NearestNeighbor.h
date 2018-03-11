#ifndef __NEAREST_NEIGHBOR_H_
#define __NEAREST_NEIGHBOR_H_

#include "CanvasserAlgorithm.h"
#include <algorithm>

class NearestNeighbor : public CanvasserAlgorithm {
private:
    const std::string algorithmName = ("Nearest neigbour");
    
    double countDistance(int);
public:
    NearestNeighbor() : CanvasserAlgorithm() {}
    virtual double findShortestPath() override;
    virtual std::string getAlgorithmName() override;
    virtual ~NearestNeighbor() {}
};

inline std::string NearestNeighbor::getAlgorithmName() {
    return algorithmName;
}

#endif