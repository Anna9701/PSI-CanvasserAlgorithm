#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

class Node {
	private:
		int x;
		int y;
		bool isVisited;
		const int RANGE = 100;
	public:
		Node();
		double countDistance(Node);
		void setVisited();
		bool isVisited();
		int getX();
		int getY();
};
