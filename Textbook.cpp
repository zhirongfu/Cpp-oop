#include "Book.hpp"
#include "Textbook.hpp"
#include <iostream>
Textbook::Textbook():gradelevel{NONE},reviewquestions{false},subject{""}
{

}
Textbook::Textbook(std::string title1,std::string author1,int pagecount1,std::string subject1,bool available1,grade_level gradelevel1,bool reviewquestions1)
:Book{title1,author1,pagecount1,available1},subject{subject1},gradelevel{gradelevel1},reviewquestions{reviewquestions1}
{

}
void Textbook::setSubject(std::string subject1)
{
    subject=subject1;
}
std::string Textbook::getSubject()const
{
    return subject;
}
void Textbook::setGradeLevel(grade_level gradelevel1)
{
    gradelevel=gradelevel1;
}
std::string Textbook::getGradeLevel()const
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
void Textbook::setReviewQuestions()
{
    reviewquestions=true;
}
bool Textbook::checkReviewQuestions()const
{
    return reviewquestions;
}