##include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
public:
    string firstName;
    string lastName;
    double attendance;
    double labs[8];
    double homework[4];
    double quizzes[4];
    double groupWork;
    double midterm;
    double finalExam;

    static ifstream inFile;

    Student() {
        if (!inFile.is_open()) {
            inFile.open("gradesIn.txt");
        }

        if (!inFile) {
            cout << "Error opening file.\n";
            return;
        }

        inFile >> firstName >> lastName >> attendance;

        for (int i = 0; i < 8; i++) inFile >> labs[i];
        for (int i = 0; i < 4; i++) inFile >> homework[i];
        for (int i = 0; i < 4; i++) inFile >> quizzes[i];

        inFile >> groupWork >> midterm >> finalExam;
    }

    double findAverageHomeworkScore() {
        double sum = 0;
        for (int i = 0; i < 4; i++) sum += homework[i];
        return sum / 4.0;
    }

    double findAverageLabScore() {
        double sum = 0;
        for (int i = 0; i < 8; i++) sum += labs[i];
        return sum / 8.0;
    }

    double findAverageQuizScore() {
        double minQuiz = quizzes[0];
        double sum = quizzes[0];
        for (int i = 1; i < 4; i++) {
            sum += quizzes[i];
            if (quizzes[i] < minQuiz) minQuiz = quizzes[i];
        }
        return (sum - minQuiz) / 3.0;
    }

    double calculateWeightedAverage() {
        return (attendance * 0.10) +
               (findAverageLabScore() * 0.15) +
               (findAverageHomeworkScore() * 0.15) +
               (findAverageQuizScore() * 0.15) +
               (groupWork * 0.05) +
               (midterm * 0.20) +
               (finalExam * 0.20);
    }

    string calculateLetterGrade(double weightedAverage) {
        if (weightedAverage >= 90) return "A";
        else if (weightedAverage >= 80) return "B";
        else if (weightedAverage >= 75) return "C+";
        else if (weightedAverage >= 70) return "C";
        else if (weightedAverage >= 60) return "D";
        else return "F";
    }
};

// Define static member
ifstream Student::inFile;

int main() {
    Student students[5];

    ofstream outFile1("gradesOut1.txt");
    ofstream outFile2("gradesOut2.txt");

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
                 << "Course Average: " << course
