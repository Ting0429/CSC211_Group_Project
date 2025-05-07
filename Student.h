//
//  Student.h
//  211 Project
//
//  Created by 林庭威 on 4/19/25.
//
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student//Keep all public in this class 
//bc we want to access all of the variables outside
{
public:
    //All of the information we got from text file
    //We managed to do this variables
    //because it's connected to our student
    Student (string, int);//Enter file and student number to initiate.
    string studentFirstName;//first name of student
    string studentLastName;//last name of student
    int classPart;//attendance/participation score
    int lab[8];//array of 8 lab scores
    int hw[4];//array of 4 homework scores
    int quiz[4];//array of 4 quiz scores
    int groupWork;//group work score
    int midterm;//midterm exam score
    int finalGrade;//final exam score
   
    
};
