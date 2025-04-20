#include "Student.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
// Ting Wei
Student :: Student (string file, int stuNum){//Enter the file line of data the student starts at to initiate.
//for loop to loop thru unused lines
//input for that student data
ifstream infile;
infile.open(file);
int x;

for (int i = 0; i < (stuNum*21); i++) {
    infile.ignore();
}

infile >> studentFirstName >> studentLastName >> classPart
>> lab1 >> lab2 >> lab3 >> lab4 >> lab5 >> lab6 >> lab7 >> lab8
>> hw1 >> hw2 >> hw3 >> hw4
>> quiz1 >> quiz2 >> quiz3 >> quiz4
>> groupWork >> midterm >> final;

}


//Function "Find Average Homework Score"
//Summer's Part 
double Student :: findAverageHomeworkScore(double hw1, double hw2, double hw3, double hw4)
{
    return((hw1 + hw2 + hw3 + hw4) / 4.0);
}

//***

//Function "Find Average Lab Score"
//Summer's Part
double Student :: findAverageLabScore(double lab1, double lab2, double lab3, double lab4, double lab5, double lab6, double lab7, double lab8)
{
    return((lab1 + lab2 + lab3 + lab4 + lab5 + lab6 + lab7 + lab8) / 8.0);
}
    
string calculateLetterGrade(double weightedAverage){
    if(weightedAverage>=90 && weightedAverage<=100){
      return "A";
    }else if(weightedAverage>=80 && weightedAverage<=89){
      return "B";
    }else if(weightedAverage>=75 && weightedAverage<=79){
      return "C+";
    }else if(weightedAverage>=70 && weightedAverage<=74){
      return "C";
    }else if(weightedAverage>=60 && weightedAverage<=64){
      return "D";
    }else if(weightedAverage>=0 && weightedAverage<=59){
      return "F";
    }else{
      return "invalid";
    }

double findMinQuiz(double quiz1,double quiz2,double quiz3, double quiz4){
    double minimumGrade=quiz1;
    if(quiz2<minimumGrade)
        minimumGrade=quiz2;
    if(quiz3<minimumGrade)
        minimumGrade=quiz3;
    if(quiz4<minimumGrade)
        minimumGrade=quiz4; 
    return minimumGrade;
}

double findAverageQuizScore(double quiz1,double quiz2,double quiz3, double quiz4){
//removal of lowest  quiz score:
    double minimumGrade=quiz1;
    if(quiz2<minimumGrade)
        minimumGrade=quiz2;
    if(quiz3<minimumGrade)
        minimumGrade=quiz3;
    if(quiz4<minimumGrade)
        minimumGrade=quiz4; 
    //average excluding lowest score
    double average;
    double sum=(quiz1+quiz2+quiz3+quiz4)-minimumGrade;
    average=sum/4;
    return average;
}
