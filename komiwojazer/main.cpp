#include <iostream>
#include "BruteForce.h"
#include <vector>
#include "CanvasserAlgorithm.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	Node x;
	Node y;
    Node a;
	BruteForce *alg = new BruteForce();
	alg->addNode(x);
	alg->addNode(y);
    alg->addNode(a);
	cout << alg->findShortestPath() << endl;
	getchar();
	return 0;
}
