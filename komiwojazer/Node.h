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
		int RANGE;
	public:
		Node();
		//Node(int xx, int yy, int n) : x(xx), y(yy), RANGE(100) {}
		double countDistance(const Node&);
		void setVisited();
		bool isVisited();
		int getX();
		int getY();
};

#endif