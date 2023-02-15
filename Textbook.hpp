#pragma once
#ifndef TEXTBOOK_H
#define TEXTBOOK_H
#include "Book.hpp"
#include <iostream>
enum grade_level{NONE=0,  ELEMENTARY, JUNIOR_HIGH, HIGH_SCHOOL, COLLEGE};
class Textbook:public Book
{
private:
    std::string subject;
    grade_level gradelevel;
    bool reviewquestions;
public:
    Textbook();
    Textbook(std::string title1,std::string author1,int pagecount1,std::string subject1,bool available1=false,grade_level gradelevel1=NONE,bool reviewquestions1=false);
    void setSubject(std::string);
    std::string getSubject();
    void setGradeLevel(grade_level);
    std::string getGradeLevel();
    void setReviewQuestions();
    bool checkReviewQuestions(); 
};
#endif