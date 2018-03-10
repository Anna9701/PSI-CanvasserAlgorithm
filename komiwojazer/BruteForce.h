#ifndef _BRUTE_FORCE_H_
#define _BRUTE_FORCE_H_

#include <iostream>
#include "CanvasserAlgorithm.h"
#include <algorithm>
#include <limits>

using namespace std;

class BruteForce : public CanvasserAlgorithm {
    private:
    public:
        BruteForce() : CanvasserAlgorithm() {
            srand((int)time(NULL));
        }
        virtual double findShortestPath() override;
        virtual ~BruteForce() {}
};

#endif
