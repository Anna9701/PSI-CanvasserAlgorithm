#include <iostream>
#include "BruteForce.h"
#include <vector>
#include "CanvasserAlgorithm.h"


using namespace std;

int main(int argc, char** argv) {
    BruteForce *alg = new BruteForce();
    for(int i = 0; i < 1000; ++i) {
        alg->addNode(Node());
    }
    cout << "Distance: " << alg->findShortestPath() << endl;
    cout << "Time: " << alg->getTime() << endl;
    getchar();
    delete alg;
    return 0;
}
