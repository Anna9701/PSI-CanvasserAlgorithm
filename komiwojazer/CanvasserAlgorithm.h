#ifndef _CANVASSER_ALGORITHM_H_
#define _CANVASSER_ALGORITHM_H_

#include <iostream>
#include <vector>
#include "Node.h"
#include <thread>


class CanvasserAlgorithm {
protected:
        std::vector<Node> nodes;
        double searchTime;
public:
        void addNode(Node);
        void addNode(Node *);
        virtual double findShortestPath() = 0;
        virtual std::string getAlgorithmName() = 0;
        double getTime();
        virtual ~CanvasserAlgorithm() {}
};

inline void CanvasserAlgorithm::addNode(Node node) {
    nodes.push_back(node);
}

inline void CanvasserAlgorithm::addNode(Node *node) {
    nodes.push_back(*node);
}


inline double CanvasserAlgorithm::getTime() {
    return searchTime;
}

#endif