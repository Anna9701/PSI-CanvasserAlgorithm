#include "Node.h"

Node::Node() {
    RANGE = 100;
	this->visited = false;
	srand(time(NULL));
	this->x = rand() % RANGE + 1;
	this->y = rand() % RANGE + 1;
    
}

bool Node::isVisited() {
	return this->visited;
}

void Node::setVisited() {
	this->visited = true;
}

int Node::getX() {
	return this->x;
}

int Node::getY() {
	return this->y;
}

double Node::countDistance(const Node &target) {
	double distance = 0;
	distance = sqrt(pow(this->x - target.x, 2) + pow(this->y - target.y, 2));
	
	return distance;
}

