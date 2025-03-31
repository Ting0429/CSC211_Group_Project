#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>// Libraries that we are using in this project

#include "Student.h"// Our Class

using namespace std; 

int main()
{
   
    cout << "Hello, World!" << endl; //testing line

    ofstream outFile("gradesOut1.txt"); // Kateryma's part
    
    //I commented it for the moment, because we don't have all functions
    /*
    if (outFile.is_open())
    {
        outFile << "Student Name: " << setw(10) << studentFirstName << setw(5) << studentLastName << endl;
        outFile << "Attendance: " << setw(10) << studentAttendance << endl;
        outFile << "Group Work: " << setw(10) << groupWork << endl;
        outFile << "Average of the Quizzes: " << setw(10) << avgQuizScore << endl;
        outFile << "Average of Labs: " << setw(10) << avgLabScore << endl;
        outFile << "Average of Homework: " << setw(10) << avgHomeworkScore << endl;
        outFile << "The Final Exam: " << setw(10) << finalExam << endl;
        outFile << "The Course Average: " << setw(10) << courseAverage << endl;

    }
    else //in case of the error
    {
        cout << "We have trouble with creating your file. Please, try again later! ";
        return 1;
    }
    */
    outFile.close(); //closing the file


    return 0;
}
