#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	Student (string, int);//Enter the line of data the student starts at to initiate.
	double findAverageHomeworkScore(double hw1, double hw2, double hw3, double hw4);
	double findAverageLabScore(double lab1, double lab2, double lab3, double lab4, double lab5, double lab6, double lab7, double lab8);
	string calculateLetterGrade(double weightedAverage);
	double findMinQuiz(double quiz1,double quiz2,double quiz3, double quiz4);
	double findAverageQuizScore(double quiz1,double quiz2,double quiz3, double quiz4);

private: 
	//All of the information we got from text file
	//We managed to do this variables, because it's connected to our student

	string studentFirstName;
	string studentLastName;
	int classPart;
	int lab1, lab2, lab3, lab4, lab5, lab6, lab7, lab8;
	int hw1, hw2, hw3, hw4;
	int quiz1, quiz2, quiz3, quiz4;
	int groupWork;
	int midterm;
	int final;

};

