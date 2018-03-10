#include "BruteForce.h"
#include "BruteForce.h"

double BruteForce::findShortestPath() {
    std::vector<vector<double>> nodesResults;
    for (unsigned int i = 0; i < nodes.size() - 1; ++i) {
        std::vector<double> tmpResults;
        for (unsigned int j = i + 1; j < nodes.size(); ++j) {
            double distance = nodes[i].countDistance(nodes[j]);
            tmpResults.push_back(distance);
        }
        nodesResults.push_back(tmpResults);
    }
    
    double min = 9999;
    double shortestDistance = 0;
    int nodeWithWhoNumber;
    int nodeWhosNumber;
    for (unsigned int i = 0; i < nodes.size() - 1; ++i) {
        try {
            std::vector<double> distances = nodesResults.at(i);
            for (unsigned int j = i + 2; j < distances.size(); ++j) {
                if (distances.at(j) < min) {
                    min = distances.at(j);
                    nodeWithWhoNumber = j;
                }
            }
        } catch (exception &ex) {
            std::cout << "Excetpion" << std::endl;
        }
        shortestDistance += min;
    }
        
      //  nodesResults.erase(nodesResults.begin() + i);
      //  nodesResults.at(nodeWithWhoNumber).erase(nodesResults.at(nodeWithWhoNumber).begin() + nodeWithWhoNumber);
    
    
    return shortestDistance;
    
}
/*
double BruteForce::findShortestPath() {
    vector<vector<double>*> results;
    vector<double> *nodeResults;
    for (unsigned int i = 0; i < nodes.size() - 1; ++i) {
        nodeResults = new vector<double>();
        for (unsigned int j = i + 1; j < nodes.size(); ++j) {
            double distance = nodes[i].countDistance(nodes[j]);
            nodeResults->push_back(distance);
        }
        results.push_back(nodeResults);
    }
    for(auto x : results) {
        cout << x->size() << endl;
    }
    double shortestDistance = 0;
    int nodeA_index = 0;
    //int nodeB_index = 1;
//    while (nodes.size()) {
//        vector<double> nodeResults = results[0];
       // double minimum = *std::min_element(results[0]->begin(), results[0]->end());
//        for (unsigned int i = 1; i < nodeResults.size(); ++i) {
//            if (nodeResults[i] == minimum) {
//                nodeA_index = i;
//                break;
//            }
//        }
//        for (unsigned int i = 1; i < nodes.size(); ++i) {
//            nodeResults = results[i];
//            double tempMin = *std::min_element(nodeResults.begin(), nodeResults.end());
//            if(tempMin < minimum) {
//                minimum = tempMin;
//                nodeA_index = i;
//                for (unsigned int j = i + 1; j < nodeResults.size(); ++j) {
//                    if (nodeResults[j] == minimum) {
//            //            nodeB_index = j;
//                        break;
//                    }
//                    
//                }
//            }
//        }
//        shortestDistance += minimum;
//        nodes.erase(nodes.begin() + nodeA_index);
//    }
//        
    
    return shortestDistance;
}*/
