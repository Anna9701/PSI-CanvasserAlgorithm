#ifndef _BRUTE_FORCE_H_
#define _BRUTE_FORCE_H_

#include <iostream>
#include "CanvasserAlgorithm.h"
#include <algorithm>

using namespace std;

class BruteForce : public CanvasserAlgorithm {
	private:
	public:
		BruteForce() : CanvasserAlgorithm() {

		}
		virtual double findShortestPath() override;
        virtual ~BruteForce() {}
};

#endif
