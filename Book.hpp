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
    Book(std::string title1,std::string author1,int pagecount1);//constructor with 3 mem
    void setTitle(const std::string);//sets title of book   
    std::string getTitle()const;//returns title of book
    void setAuthor(const std::string);//sets author of book 
    std::string getAuthor()const;//returns author of book
    void setPageCount(const int);//sets page count of book
    int getPageCount()const;//return page count of book
    void setDigital();//sets digital availability of book
    bool isDigital()const;//returns digital availability
    
};
#endif