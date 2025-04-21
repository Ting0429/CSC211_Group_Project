#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>// Libraries that we are using in this project

#include "Student.h"// Our Class

using namespace std;
//=======
// Function prototypes
double calculateWeightedAverage(Student s);
double findAverageHomeworkScore(double hw1, double hw2, double hw3, double hw4);

double findAverageLabScore(double lab1, double lab2, double lab3, double lab4, double lab5, double lab6, double lab7, double lab8);

//parameters for the functions:
string calculateLetterGrade(double weightedAverage);
double findMinQuiz(double quiz1,double quiz2,double quiz3, double quiz4);
double findAverageQuizScore(double quiz1,double quiz2,double quiz3, double quiz4);
    int main() {
        // Create an array of Student objects
        Student s1("/Applications/C++ Projects/211 Project/211 Project/GradesIn.txt",1);
        Student s2("/Applications/C++ Projects/211 Project/211 Project/GradesIn.txt",2);
        Student s3("/Applications/C++ Projects/211 Project/211 Project/GradesIn.txt",3);
        Student s4("/Applications/C++ Projects/211 Project/211 Project/GradesIn.txt",4);
        Student s5("/Applications/C++ Projects/211 Project/211 Project/GradesIn.txt",5);
        Student students[] = {s1, s2, s3, s4, s5};
        // Open output files
        ofstream outFile1("/Applications/C++ Projects/211 Project/211 Project/gradesOut1.txt");
        ofstream outFile2("/Applications/C++ Projects/211 Project/211 Project/gradesOut2.txt");

        if (!outFile1 || !outFile2) {
            cout << "Error opening output files.\n";
            return 1;
        }

        outFile1 << fixed << setprecision(2);
        outFile2 << fixed << setprecision(2);

        double totalCourseAverage = 0;
        int totalStudents = 5;

        for (int i = 0; i < totalStudents; i++) {
            Student& s = students[i];
            double courseAvg = calculateWeightedAverage(students[i]);
            string letter = calculateLetterGrade(courseAvg);

            // Output to gradesOut1.txt
            outFile1 << s.studentFirstName << " " << s.studentLastName << endl
            << "Attendance: " << s.classPart << endl
                     << "Group Work: " << s.groupWork << endl
            << "Average of Quizzes: " << findAverageQuizScore(students[i].quiz[0], students[i].quiz[1], students[i].quiz[2], students[i].quiz[3]) << endl
                     << "Average of Labs: " << findAverageLabScore(students[i].lab[0], students[i].lab[1], students[i].lab[2], students[i].lab[3], students[i].lab[4], students[i].lab[5], students[i].lab[6], students[i].lab[7]) << endl
                     << "Average of Homework: " << findAverageHomeworkScore(students[i].hw[0], students[i].hw[1], students[i].hw[2], students[i].hw[3]) << endl
                     << "Final Exam: " << s.finalGrade << endl
                     << "Course Average: " << courseAvg << endl
                     << "--------------------------------------" << endl;

            // Output to gradesOut2.txt
            outFile2 << s.studentFirstName << " " << s.studentLastName << endl
                     << "Course Average: " << courseAvg << endl
                     << "Letter Grade: " << letter << endl
                     << "--------------------------------------" << endl;

            totalCourseAverage += courseAvg;
        }

        outFile2 << "Total number of students: " << totalStudents << endl;
        outFile2 << "Class average: " << (totalCourseAverage / totalStudents) << endl;

        outFile1.close();
        outFile2.close();
        return 0;
    }


//calculateWeightedAverage function:
double calculateWeightedAverage(Student s) {
    return ((s.classPart * 0.10)*10) +
           ((findAverageLabScore(s.lab[0], s.lab[1], s.lab[2], s.lab[3],
                                s.lab[4], s.lab[5], s.lab[6], s.lab[7]) * 0.15)*10) +
           ((findAverageHomeworkScore(s.hw[0], s.hw[1], s.hw[2], s.hw[3]) * 0.15)*5) +
           (findAverageQuizScore(s.quiz[0], s.quiz[1], s.quiz[2], s.quiz[3]) * 0.15) +
           ((s.groupWork * 0.05)*10) +
           (s.midterm * 0.20) +
           (s.finalGrade * 0.20);
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

//4-findAverageHomeworkScore function:
double findAverageHomeworkScore(double hw1, double hw2, double hw3, double hw4){
    //multiply the first two homework scores by 2
    //get the average of all four scores
    return(((hw1*2) + (hw2*2) + hw3 + hw4) / 4.0);
}

//5-findAverageLabScore function:
double findAverageLabScore(double lab1, double lab2, double lab3, double lab4, double lab5, double lab6, double lab7, double lab8){
    //average of all eight lab scores
    return((lab1 + lab2 + lab3 + lab4 + lab5 + lab6 + lab7 + lab8) / 8.0);
}
