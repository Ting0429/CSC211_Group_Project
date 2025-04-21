#include <iostream>
#include <fstream>
#include <iomanip>
#include "Student.h"

using namespace std;
//defining static ifstream for student class
ifstream Student::inFile;
int main() {
    Student::inFile.open("gradesIn.txt");
    if (!Student::inFile) {
        cout << "Error opening input file.\n";
        return 1;
    }

    //array to hold the Student objects
    Student students[5];
    //creating and opening two output files
    ofstream outFile1("gradesOut1.txt");
    ofstream outFile2("gradesOut2.txt");
    //making sure it can open
    if (!outFile1 || !outFile2) {
        cout << "Error opening output files.\n";
        return 1;
    }
    //setting output format
    outFile1 << fixed << setprecision(2);
    outFile2 << fixed << setprecision(2);

    double totalCourseAverage = 0;
    int totalStudents = 5;

    for (int i = 0; i < totalStudents; i++) {
        //Student &s is updated with the for loop and creating a reference to students[i]
        Student& s = students[i];
        //calculating course weighted avg and letter grade
        double courseAvg = s.calculateWeightedAverage();
        string letter = s.calculateLetterGrade(courseAvg);

        // Output to gradesOut1.txt
        outFile1 << s.firstName << " " << s.lastName << endl
                 << "Attendance: " << s.attendance << endl
                 << "Group Work: " << s.groupWork << endl
                 << "Average of Quizzes: " << s.findAverageQuizScore() << endl
                 << "Average of Labs: " << s.findAverageLabScore() << endl
                 << "Average of Homework: " << s.findAverageHomeworkScore() << endl
                 << "Final Exam: " << s.finalExam << endl
                 << "Course Average: " << courseAvg << endl
                 << "--------------------------------------" << endl;

        // Output to gradesOut2.txt
        outFile2 << s.firstName << " " << s.lastName << endl
                 << "Course Average: " << courseAvg << endl
                 << "Letter Grade: " << letter << endl
                 << "--------------------------------------" << endl;
        //adding to class overall average later
        totalCourseAverage += courseAvg;
    }

    outFile2 << "Total number of students: " << totalStudents << endl;
    outFile2 << "Class average: " << (totalCourseAverage / totalStudents) << endl;
    //closing output files
    outFile1.close();
    outFile2.close();

    return 0;
}
