#ifndef __NEAREST_NEIGHBOR_H_
#define __NEAREST_NEIGHBOR_H_

#include "CanvasserAlgorithm.h"

class NearestNeighbor : public CanvasserAlgorithm {
private:
    const string algorithmName = ("Nearest neigbour");
    
    double countDistance();
public:
    NearestNeighbor() : CanvasserAlgorithm() {}
    virtual double findShortestPath() override;
    virtual string getAlgorithmName() override;
    virtual ~NearestNeighbor() {}
};



#endif