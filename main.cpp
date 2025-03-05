#include <iostream>
using namespace std;

double findAverageHomeworkScore(double hw1, double hw2, double hw3, double hw4);

double findAverageLabScore(double lab1, double lab2, double lab3, double lab4, double lab5, double lab6, double lab7, double lab8);

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}

double findAverageHomeworkScore(double hw1, double hw2, double hw3, double hw4)
{
    return((hw1 + hw2 + hw3 + hw4)/4.0);
}

double findAverageLabScore(double lab1, double lab2, double lab3, double lab4, double lab5, double lab6, double lab7, double lab8)
{
    return((lab1 + lab2 + lab3 + lab4 + lab5 + lab6 + lab7 + lab8)/8.0);
}
