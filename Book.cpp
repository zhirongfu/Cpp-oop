#include <iostream>
#include "Book.hpp"
Book::Book()
{
    pagecount=0;
    available=false;
}
Book::Book(std::string title1,std::string author1,int pagecount1)
{
    title=title1;
    author=author1;
    pagecount=pagecount1;
    available=false;
}
Book::Book(std::string title1,std::string author1,int pagecount1, bool available1)
{
    title=title1;
    author=author1;
    pagecount=pagecount1;
    available=available1;    
}
void Book::setTitle(std::string title1)
{
    title=title1;
}
std::string Book::getTitle()
{
    return title;
}
void Book::setAuthor(std::string author1)
{
    author=author1;
}
std::string Book::getAuthor()
{
    return author;
}
void Book::setPageCount(int pagecount1)
{
    if(pagecount1>0)
    {
        pagecount=pagecount1;
    }
}
int Book::getPageCount()
{
    return pagecount;
}
void Book::setDigital()
{
    available=true;
}
bool Book::isDigital()
{
    return available;
}

