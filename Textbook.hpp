//Zhi Fu         zhi.fu57@myhunter.cuny.edu         2/18/23
#pragma once
#ifndef TEXTBOOK_H
#define TEXTBOOK_H
#include "Book.hpp"
#include <iostream>
enum grade_level{NONE=0,  ELEMENTARY, JUNIOR_HIGH, HIGH_SCHOOL, COLLEGE};//enum for usage
class Textbook:public Book
{
private://private data members
    std::string subject;//subject of textbook
    grade_level gradelevel;//grade level of tb
    bool reviewquestions;//flag for if tb has review questions
public://public functions
    Textbook();//default constructor
    Textbook(std::string title1,std::string author1,int pagecount1,std::string subject1,bool available1=false,grade_level gradelevel1=NONE,bool reviewquestions1=false);//param constructor
    void setSubject(const std::string&);//sets subject of tb
    std::string getSubject()const;//returns subject of tb
    void setGradeLevel(const grade_level&);//sets gradelevel
    std::string getGradeLevel()const;//returns gradelevel of tb
    void setReviewQuestions();//sets review question flag to true
    bool checkReviewQuestions()const; //returns flag for review question
};
#endif