#pragma once
#ifndef CALCULATE_H
#define CALCULATE_H
#include <vector>

using namespace std;

class Calculate {
public:
    double evaluateEquation(const vector<int>& numbers, const vector<char>& operators, int index);
};

#endif
