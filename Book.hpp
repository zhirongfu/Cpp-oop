#pragma once
#ifndef BOOK_H
#define BOOK_H
#include <iostream>
class Book
{
private://members
    std::string title;//title of book       
    std::string author;//author of book
    int pagecount;//pagecount of book
    bool available;//digital availability of book
public://member functions
    Book();//default constructor
    Book(std::string title1,std::string author1,int pagecount1, bool available1);//constructor with all 4 mem
    Book(std::string title1,std::string author1,int pagecount1);//constructor with 3 
    void setTitle(std::string);//setter
    std::string getTitle()const;//getter
    void setAuthor(std::string);//setter
    std::string getAuthor()const;//getter
    void setPageCount(int);//setter
    int getPageCount()const;//getter
    void setDigital();//setter
    bool isDigital()const;//getter
};
#endif