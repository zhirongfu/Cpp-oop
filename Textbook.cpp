#include "Textbook.hpp"
#include <iostream>
Textbook::Textbook():Book{},reviewquestions{0},gradelevel{NONE}
{

}
Textbook::Textbook(std::string title1,std::string author1,int pagecount1, bool available1,std::string subject1,grade_level gradelevel1,bool reviewquestions1)
:Book{title1,author1,pagecount1,available1},subject{subject1},gradelevel{gradelevel1},reviewquestions{reviewquestions1}
{

}
void Textbook::setSubject(std::string subject1)
{
    subject=subject1;
}
std::string Textbook::getSubject()
{
    return subject;
}
void Textbook::setGradeLevel(grade_level gradelevel1)
{
    gradelevel=gradelevel1;
}
std::string Textbook::getGradeLevel()
{
    if (gradelevel=NONE)
    {
        return "NONE";
    }
    if (gradelevel=ELEMENTARY)
    {
        return "ELEMENTARY";
    }
    if (gradelevel=JUNIOR_HIGH)
    {
        return "JUNIOR HIGH";
    }
    if (gradelevel=HIGH_SCHOOL)
    {
        return "HIGH SCHOOL";
    }
    if (gradelevel=COLLEGE)
    {
        return "COLLEGE";
    }
}
void Textbook::setReviewQuestions()
{
    reviewquestions=1;
}
bool Textbook::checkReviewQuestions()
{
    return reviewquestions;
}