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
ofstream outFile("gradesOut2.txt");
  if(!outFile){
    cout<<"Error: Can't open txt"<<endl;
    return 1;
  }
  //outfiling for all 5 students
  outFile<<fixed<<setprecision(2);
  outFile<<s1.studentFirstName<<" "<<s1.studentLastName<<endl
    <<"Course Average: "<<courseAverage1<<endl
    <<"Letter Grade: "<<letterGrade1<<endl;
  
  outFile<<fixed<<setprecision(2);
  outFile<<s2.studentFirstName<<" "<<s2.studentLastName<<endl
    <<"Course Average: "<<courseAverage2<<endl
    <<"Letter Grade: "<<letterGrade2<<endl;
  
  outFile<<fixed<<setprecision(2);
  outFile<<s3.studentFirstName<<" "<<s3.studentLastName<<endl
    <<"Course Average: "<<courseAverage3<<endl
    <<"Letter Grade: "<<letterGrade3<<endl;
  
  outFile<<fixed<<setprecision(2);
  outFile<<s4.studentFirstName<<" "<<s4.studentLastName<<endl
    <<"Course Average: "<<courseAverage4<<endl
    <<"Letter Grade: "<<letterGrade4<<endl;
  
  outFile<<fixed<<setprecision(2);
  outFile<<s5.studentFirstName<<" "<<s5.studentLastName<<endl
    <<"Course Average: "<<courseAverage5<<endl
    <<"Letter Grade: "<<letterGrade5<<endl;
//summary at the end:
  cout<<"------------------------------------------------------"<<endl;
  double classavg=(courseAverage1+courseAverage2+courseAverage3+courseAverage4+courseAverage5)/5.0;
  outFile<<"Total Number of students: 5"<<endl;
  outFile<<"Class average: "<<classavg<<endl;
  outFile.close();
  cout<<"gradesOu2.out successfully made"<<endl;
}
//1-calculateLetterGrade:
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
}

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
