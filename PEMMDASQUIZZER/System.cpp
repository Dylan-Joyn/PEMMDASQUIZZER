#include "System.h"
#include "Calculate.h"
#include <iostream>

using namespace std;

void System::start() {
    do {
        double tempScore = pemmdasQuiz();
        pemmdasScores.push_back(tempScore);

        char choice;
        cout << "Do you want to view your scores? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            printScores();
        }

        cout << "Do you want to try another PEMMDAS practice? (y/n): ";
        cin >> choice;

        if (choice != 'y' && choice != 'Y') {
            break;
        }
    } while (true);
}

void System::printScores() {
    cout << "Your percentages on PEMMDAS quizzes are:" << endl;
    for (size_t i = 0; i < pemmdasScores.size(); ++i) {
        cout << i + 1 << ":\t" << pemmdasScores[i] << "%" << endl;
    }
}

double System::pemmdasQuiz() {
    int numProblems;
    cout << "How many problems would you like to solve?" << endl;
    cin >> numProblems;

    double totalScore = 0.0;
    for (int i = 0; i < numProblems; ++i) {
        PEMMDAS equation;
        cout << "Problem " << i + 1 << ": ";
        equation.generateEquation();
        equation.printEquation();

        double userAnswer;
        cin >> userAnswer;

        Calculate calculator;
        double correctAnswer = calculator.evaluateEquation(equation.getNumbers(), equation.getOperators(), 0);

        if (abs(userAnswer - correctAnswer) < 0.001) {
            cout << "Correct" << endl;
            totalScore += 10.0;
        }
        else {
            cout << "Wrong the answer was " << correctAnswer << endl;
        }
    }
    return totalScore / numProblems;
}
