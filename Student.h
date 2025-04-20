
#include <string>
#include <fstream>
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

    Student();

    double findAverageHomeworkScore();
    double findAverageLabScore();
    double findAverageQuizScore();
    double calculateWeightedAverage();
    string calculateLetterGrade(double weightedAverage);
};


