#ifndef _CANVASSER_ALGORITHM_H_
#define _CANVASSER_ALGORITHM_H_

#include <iostream>
#include <vector>
#include "Node.h"
#include <thread>


class CanvasserAlgorithm {
protected:
        std::vector<Node> nodes;
public:
        CanvasserAlgorithm();
        void addNode(Node);
        virtual double findShortestPath() = 0;
        virtual std::string getAlgorithmName() = 0;
        virtual ~CanvasserAlgorithm() {}
};

inline CanvasserAlgorithm::CanvasserAlgorithm() {
    srand((int)time(NULL));
}

inline void CanvasserAlgorithm::addNode(Node node) {
    nodes.push_back(node);
}

#endif