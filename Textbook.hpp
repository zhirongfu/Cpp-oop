#pragma once
#ifndef TEXTBOOK_H
#define TEXTBOOK_H
#include "Book.hpp"
#include <iostream>
enum grade_level{NONE,  ELEMENTARY, JUNIOR_HIGH, HIGH_SCHOOL, COLLEGE};
class Textbook:public Book
{
private:
    std::string subject;
    grade_level gradelevel;
    bool reviewquestions;
public:
    Textbook();
    Textbook(std::string title1,std::string author1,int pagecount1, bool available1,std::string subject1,grade_level gradelevel1,bool reviewquestions1);
    void setSubject(std::string);
    std::string getSubject();
    void setGradeLevel(grade_level);
    std::string getGradeLevel();
    void setReviewQuestions();
    bool checkReviewQuestions(); 
};
#endif