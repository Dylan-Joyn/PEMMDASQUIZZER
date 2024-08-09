#include "PEMMDAS.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void PEMMDAS::generateEquation() {
    numbers.resize(9);
    operators.resize(8);

    for (int& num : numbers) {
        num = rand() % 20 + 1;
    }

    for (char& op : operators) {
        int randOpp = rand() % 5;
        switch (randOpp) {
        case 0: op = '+'; break;
        case 1: op = '-'; break;
        case 2: op = '*'; break;
        case 3: op = '/'; break;
        case 4: op = '%'; break;
        }
    }
}

void PEMMDAS::printEquation() {
    for (size_t i = 0; i < operators.size(); ++i) {
        cout << numbers[i] << " " << operators[i] << " ";
    }
    cout << numbers.back() << endl;
}

vector<int> PEMMDAS::getNumbers() const {
    return numbers;
}

vector<char> PEMMDAS::getOperators() const {
    return operators;
}
