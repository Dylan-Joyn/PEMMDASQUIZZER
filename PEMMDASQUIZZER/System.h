#pragma once
#ifndef SYSTEM_H
#define SYSTEM_H
#include <vector>
#include "PEMMDAS.h"

using namespace std;

class System {
private:
    vector<double> pemmdasScores;

public:
    void start();
    void printScores();
    double pemmdasQuiz();
};


#endif