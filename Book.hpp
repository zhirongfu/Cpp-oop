#pragma once
#ifndef BOOK_H
#define BOOK_H
#include <iostream>
class Book
{
private:
    std::string title;
    std::string author;
    int pagecount;
    bool available;
public:
    Book();
    Book(std::string title1,std::string author1,int pagecount1, bool available1);
    Book(std::string title1,std::string author1,int pagecount1);
    void setTitle(std::string);
    std::string getTitle();
    void setAuthor(std::string);
    std::string getAuthor();
    void setPageCount(int);
    int getPageCount();
    void setDigital();
    bool isDigital();
};
#endif