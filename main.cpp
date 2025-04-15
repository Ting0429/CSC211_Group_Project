#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>// Libraries that we are using in this project

//<<<<<<< kateryna's-Branch
#include "Student.h"// Our Class

using namespace std; 
//=======
double findAverageHomeworkScore(double hw1, double hw2, double hw3, double hw4);

double findAverageLabScore(double lab1, double lab2, double lab3, double lab4, double lab5, double lab6, double lab7, double lab8);

//parameters for the functions:
string calculateLetterGrade(double weightedAverage);
double findMinQuiz(double quiz1,double quiz2,double quiz3, double quiz4);
double findAverageQuizScore(double quiz1,double quiz2,double quiz3, double quiz4);

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
double findAverageHomeworkScore(double hw1, double hw2, double hw3, double hw4)
{
    return((hw1 + hw2 + hw3 + hw4) / 4.0);
}

//***

//Function "Find Average Lab Score"
//Summer's Part
double findAverageLabScore(double lab1, double lab2, double lab3, double lab4, double lab5, double lab6, double lab7, double lab8)
{
    return((lab1 + lab2 + lab3 + lab4 + lab5 + lab6 + lab7 + lab8) / 8.0);
}

string calculateLetterGrade(double weightedAverage) {
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

double findAverageQuizScore(double quiz1,double quiz2,double quiz3, double quiz4) {
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


// //1-calculateLetterGrade:
// string calculateLetterGrade(double weightedAverage){
//     if(weightedAverage>=90 && weightedAverage<=100){
//       return "A";
//     }else if(weightedAverage>=80 && weightedAverage<=89){
//       return "B";
//     }else if(weightedAverage>=75 && weightedAverage<=79){
//       return "C+";
//     }else if(weightedAverage>=70 && weightedAverage<=74){
//       return "C";
//     }else if(weightedAverage>=60 && weightedAverage<=64){
//       return "D";
//     }else if(weightedAverage>=0 && weightedAverage<=59){
//       return "F";
//     }else{
//       return "invalid";
//     }
// }
// //2-findMinQuiz function:
// double findMinQuiz(double quiz1,double quiz2,double quiz3, double quiz4){
//     double minimumGrade=quiz1;
//     if(quiz2<minimumGrade)
//         minimumGrade=quiz2;
//     if(quiz3<minimumGrade)
//         minimumGrade=quiz3;
//     if(quiz4<minimumGrade)
//         minimumGrade=quiz4;
//     return minimumGrade;
// }
// //3-findAverageQuizScore function:
// double findAverageQuizScore(double quiz1,double quiz2,double quiz3, double quiz4){
// //removal of lowest  quiz score:
//     double minimumGrade=quiz1;
//     if(quiz2<minimumGrade)
//         minimumGrade=quiz2;
//     if(quiz3<minimumGrade)
//         minimumGrade=quiz3;
//     if(quiz4<minimumGrade)
//         minimumGrade=quiz4;
//     //average excluding lowest score
//     double average;
//     double sum=(quiz1+quiz2+quiz3+quiz4)-minimumGrade;
//     average=sum/4;
//     return average;
// }
//
// double findAverageHomeworkScore(double hw1, double hw2, double hw3, double hw4);
//
// double findAverageLabScore(double lab1, double lab2, double lab3, double lab4, double lab5, double lab6, double lab7, double lab8);
//
// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }
//
// double findAverageHomeworkScore(double hw1, double hw2, double hw3, double hw4)
// {
//     return((hw1 + hw2 + hw3 + hw4)/4.0);
// }
// //>>>>>>> main
//
// int main()
// {
// // <<<<<<< summerBranch
// //     return((lab1 + lab2 + lab3 + lab4 + lab5 + lab6 + lab7 + lab8)/8.0);
// // =======
// //<<<<<<< kateryna's-Branch
//
//     cout << "Hello, World!" << endl; //testing line
//
//     ofstream outFile("gradesOut1.txt"); // Kateryma's part
//
//     //I commented it for the moment, because we don't have all functions
//     /*
//     if (outFile.is_open())
//     {
//         outFile << "Student Name: " << setw(10) << studentFirstName << setw(5) << studentLastName << endl;
//         outFile << "Attendance: " << setw(10) << studentAttendance << endl;
//         outFile << "Group Work: " << setw(10) << groupWork << endl;
//         outFile << "Average of the Quizzes: " << setw(10) << avgQuizScore << endl;
//         outFile << "Average of Labs: " << setw(10) << avgLabScore << endl;
//         outFile << "Average of Homework: " << setw(10) << avgHomeworkScore << endl;
//         outFile << "The Final Exam: " << setw(10) << finalExam << endl;
//         outFile << "The Course Average: " << setw(10) << courseAverage << endl;
//
//     }
//     else //in case of the error
//     {
//         cout << "We have trouble with creating your file. Please, try again later! ";
//         return 1;
//     }
//     */
//     outFile.close(); //closing the file
//
//
//     return 0;
// //=======
// //    return((lab1 + lab2 + lab3 + lab4 + lab5 + lab6 + lab7 + lab8)/8.0);
// //>>>>>>> main
// //>>>>>>> main
// }

