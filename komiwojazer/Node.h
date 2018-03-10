#ifndef _NODE_H_
#define _NODE_H_

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

class Node {
    private:
        int x;
        int y;
        bool visited;
        int RANGE = (100);
    public:
        Node();
        double countDistance(const Node&);
        void setVisited();
        bool isVisited();
        int getX();
        int getY();
};

#endif