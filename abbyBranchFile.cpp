#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
//parameters for the functions:
string calculateLetterGrade(double weightedAverage);
double findMinQuiz(double quiz1,double quiz2,double quiz3, double quiz4);
double findAverageQuizScore(double quiz1,double quiz2,double quiz3, double quiz4);
double findAverageHomeworkScore(double homework1,double homework2,double homework3, double homework4);
double findAverageLabScore( double lab1,double lab2, double lab3,double lab4, double lab5, double lab6, double lab7, double lab8);
int main(){

  
}
//1-calculateLetterGrade:

//2-findMinQuiz function:
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
//3-findAverageQuizScore function:
double findAverageQuizScore(double quiz1,double quiz2,double quiz3, double quiz4){
double average;
double sum=(quiz1+quiz2+quiz3+quiz4);
average=sum/4;
return average;
}
