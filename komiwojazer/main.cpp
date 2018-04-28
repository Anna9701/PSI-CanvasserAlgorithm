#include <iostream>
#include "BruteForce.h"
#include <vector>
#include "CanvasserAlgorithm.h"
#include "NearestNeighbor.h"
#include <thread>

using namespace std;

void findPath(CanvasserAlgorithm *alg) {
    auto begin = clock();
    cout << alg->getAlgorithmName() << ": Distance: " << alg->findShortestPath() << endl;
    auto end = clock();
    cout << "Time: " << double(end - begin) / CLOCKS_PER_SEC << endl;
}

int main(int argc, char** argv) {
    BruteForce *algB = new BruteForce();
    NearestNeighbor *algN = new NearestNeighbor();
    for(int i = 0; i < 10; ++i) {
        Node temp;
        algB->addNode(temp);
        algN->addNode(temp);
    }
    std::thread thd1(findPath, algB);
    std::thread thd2(findPath, algN);
    thd1.join();
    thd2.join();
    getchar();
    delete algB;
    delete algN;
    return 0;
}

/*
Few tests showed shorter time for NN that Brute Force. Brute force algorithm to fix?
*/