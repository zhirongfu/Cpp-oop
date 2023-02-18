#include "Book.hpp"
#include "Textbook.hpp"
#include <iostream>
Textbook::Textbook():gradelevel{NONE},reviewquestions{false},subject{""}//default constructor
{

}
Textbook::Textbook(std::string title1,std::string author1,int pagecount1,std::string subject1,bool available1,grade_level gradelevel1,bool reviewquestions1)
:Book{title1,author1,pagecount1,available1},subject{subject1},gradelevel{gradelevel1},reviewquestions{reviewquestions1}//param constructor
{

}
void Textbook::setSubject(std::string subject1)//sets subject of tb
{
    subject=subject1;
}
std::string Textbook::getSubject()const//returns subject of tb
{
    return subject;
}
void Textbook::setGradeLevel(grade_level gradelevel1)//sets gradelevel
{
    gradelevel=gradelevel1;
}
std::string Textbook::getGradeLevel()const//returns gradelevel of tb
{
    if (gradelevel==NONE)
    {
        return "NONE";
    }
    if (gradelevel==ELEMENTARY)
    {
        return "ELEMENTARY";
    }
    if (gradelevel==JUNIOR_HIGH)
    {
        return "JUNIOR HIGH";
    }
    if (gradelevel==HIGH_SCHOOL)
    {
        return "HIGH SCHOOL";
    }
    if (gradelevel==COLLEGE)
    {
        return "COLLEGE";
    }
}
void Textbook::setReviewQuestions()//sets review question flag to true
{
    reviewquestions=true;
}
bool Textbook::checkReviewQuestions()const//returns flag for review question
{
    return reviewquestions;
}