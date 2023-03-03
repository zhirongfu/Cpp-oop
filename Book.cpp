//Zhi Fu         zhi.fu57@myhunter.cuny.edu         2/18/23
#include <iostream>
#include "Book.hpp"
Book::Book():title{""},author{""},pagecount{0},available{false}  //default constructor
{
    //pagecount=0;//default pagecount is 0
    //available=false;default digital availability is false
}
Book::Book(std::string title1,std::string author1,int pagecount1, bool available1)//constructor if everything is provided
{
    title=title1;
    author=author1;
    pagecount=pagecount1;
    available=available1;    
}
void Book::setTitle(std::string title1)//sets title
{
    title=title1;
}
std::string Book::getTitle()const//returns title
{
    return title;
}
void Book::setAuthor(std::string author1)//sets author of the book
{
    author=author1;
}
std::string Book::getAuthor()const//returns author
{
    return author;
}
void Book::setPageCount(int pagecount1)//sets page count
{
    if(pagecount1>0)//only allows positive pagecount
    {
        pagecount=pagecount1;
    }
}
int Book::getPageCount()const//returns pagecount
{
    return pagecount;
}
void Book::setDigital()//sets digital availablity to true
{
    available=true;
}
bool Book::isDigital()const//returns availability
{
    return available;
}
bool Book::operator == (Book& book2)
{
    if(title==book2.getTitle()&&author==book2.getAuthor()&&pagecount==book2.getPageCount()&&available==book2.isDigital())
        {
            return true;
        }
    else    
        {
            return false;
        }
}
bool Book::operator != (Book& book2)
{
    if(title==book2.getTitle()&&author==book2.getAuthor()&&pagecount==book2.getPageCount()&&available==book2.isDigital())
        {
            return false;
        }
    else
        {
            return true;
        }
}

void Book::display()
{
    std::string isit="It is not";
    if(available==true)
    {
        isit="It is";
    }
    std::cout<<title+" is written by "+author+". Page Count: "+std::to_string(pagecount)+". "+isit+" available digitally.\n";
}