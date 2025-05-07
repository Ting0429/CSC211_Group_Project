//
//  Student.cpp
//  211 Project
//
//  Created by 林庭威 on 4/19/25.
//

#include "Student.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
// Ting Wei
Student :: Student (string file, int stuNum){
    //Enter the file line of data the student starts at to initiate.
    ifstream infile;
    infile.open(file);
    if (stuNum <= 5&& stuNum > 0) {//if the student number is valid
        string temp;
        for (int i = 0; i < (stuNum-1)*9; i++) {
            getline (infile, temp);
        }//skips thru unnecessary lines
        
        infile >> studentFirstName >> studentLastName >> classPart
        >> lab[0] >> lab[1] >> lab[2] >> lab[3] >> lab[4] >> lab[5] >> lab[6] >> lab[7]
        >> hw[0] >> hw[1] >> hw[2] >> hw[3]
        >> quiz[0] >> quiz[1] >> quiz[2] >> quiz[3]
        >> groupWork >> midterm >> finalGrade;//stores the data into the variables
    }
    else {
        cout << "Invalid student number." << endl; //if there is no such student number
    }
}
