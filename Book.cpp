#include <iostream>
#include "Book.hpp"
Book::Book()//default constructor
{
    pagecount=0;//default pagecount is 0
    available=false;//default digital availability is false
}
Book::Book(std::string title1,std::string author1,int pagecount1)//constructor if they don't provide digital availability
{
    title=title1;
    author=author1;
    pagecount=pagecount1;
    available=false;
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

