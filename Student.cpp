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
