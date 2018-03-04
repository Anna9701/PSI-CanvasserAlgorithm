#include "Node.h"

Node::Node() {
	this.isVisited = false;
	srand(time(NULL));
	this.x = rand() % RANGE;
	this.y = rand() % RANGE;	
}

bool Node::isVisited() {
	return this.isVisited;
}

void Node::setVisited() {
	this.isVisited = true;
}

int Node::getX() {
	return this.x;
}

int Node::getY() {
	return this.y;
}

double Node::countDistance(Node target) {
	double distance = 0;
	distance = sqrt(pow(this.x - target.x, 2) + pow(this.y - target.y, 2));
	
	return distance;
}
