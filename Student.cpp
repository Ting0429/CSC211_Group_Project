#include "Student.h"
#include <iostream>

ifstream Student::inFile;

Student::Student() {
    if (!inFile.is_open()) {
        inFile.open("gradesIn.txt");
    }

    if (!inFile) {
        cout << "Error opening file.\n";
        return;
    }

    inFile >> firstName >> lastName >> attendance;

    for (int i = 0; i < 8; i++) 
        inFile >> labs[i];
    for (int i = 0; i < 4; i++) 
        inFile >> homework[i];
    for (int i = 0; i < 4; i++) 
        inFile >> quizzes[i];

    inFile >> groupWork >> midterm >> finalExam;
}

double Student::findAverageHomeworkScore() {
    double sum = 0;
    for (int i = 0; i < 4; i++) sum += homework[i];
    return sum / 4.0;
}

double Student::findAverageLabScore() {
    double sum = 0;
    for (int i = 0; i < 8; i++) sum += labs[i];
    return sum / 8.0;
}

double Student::findAverageQuizScore() {
    double minQuiz = quizzes[0];
    double sum = quizzes[0];
    for (int i = 1; i < 4; i++) {
        sum += quizzes[i];
        if (quizzes[i] < minQuiz) minQuiz = quizzes[i];
    }
    return (sum - minQuiz) / 3.0;
}

double Student::calculateWeightedAverage() {
    return (attendance * 0.10) +
           (findAverageLabScore() * 0.15) +
           (findAverageHomeworkScore() * 0.15) +
           (findAverageQuizScore() * 0.15) +
           (groupWork * 0.05) +
           (midterm * 0.20) +
           (finalExam * 0.20);
}

string Student::calculateLetterGrade(double weightedAverage) {
    if (weightedAverage >= 90) return "A";
    else if (weightedAverage >= 80) return "B";
    else if (weightedAverage >= 75) return "C+";
    else if (weightedAverage >= 70) return "C";
    else if (weightedAverage >= 60) return "D";
    else return "F";
}
