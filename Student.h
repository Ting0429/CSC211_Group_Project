#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
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
	int studentID;
	int studentAttendance;
	double avgHomeworkScore;
	double avgLabScore;
	double groupWork;
	double avgQuizScore;
	double finalExam;
	double courseAverage;

};

