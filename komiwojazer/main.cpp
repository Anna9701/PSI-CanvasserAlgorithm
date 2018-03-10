#include <iostream>
#include "BruteForce.h"
#include <vector>
#include "CanvasserAlgorithm.h"


using namespace std;

int main(int argc, char** argv) {
    BruteForce *alg = new BruteForce();
    for(int i = 0; i < 2; ++i) {
        alg->addNode(Node());
    }
    cout << alg->findShortestPath() << endl;
    getchar();
    return 0;
}
