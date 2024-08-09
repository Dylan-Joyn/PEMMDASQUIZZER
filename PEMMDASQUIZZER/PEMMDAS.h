#pragma once
#ifndef PEMMDAS_H
#define PEMMDAS_H
#include <vector>

using namespace std;

class PEMMDAS {
private:
    vector<int> numbers;
    vector<char> operators;

public:
    void generateEquation();
    void printEquation();
    vector<int> getNumbers() const;
    vector<char> getOperators() const;
};


#endif