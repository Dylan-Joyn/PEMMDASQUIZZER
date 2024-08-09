#include "Calculate.h"

double Calculate::evaluateEquation(const vector<int>& numbers, const vector<char>& operators, int index) {
    if (index == operators.size()) {
        return numbers[index];
    }

    double currentResult = evaluateEquation(numbers, operators, index + 1);

    switch (operators[index]) {
    case '+': return numbers[index] + currentResult;
    case '-': return numbers[index] - currentResult;
    case '*': return numbers[index] * currentResult;
    case '/': return numbers[index] / currentResult;
    case '%': return numbers[index] % static_cast<int>(currentResult);
    default: return currentResult;
    }
}
