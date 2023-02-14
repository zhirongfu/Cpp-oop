#pragma once
#ifndef MANUAL_H
#define MANUAL_H
#include "Book.hpp"
#include <iostream>
class Manual:public Book
{
private:
    std::string url;
    std::string nameofdevice;
    bool visualaid;
    bool website;
public:
Manual();
Manual(std::string title1,std::string author1,int pagecount1,std::string nameofdevice1, bool available1=false,std::string url="",bool visualaid1=0);
void setDevice(std::string);
std::string getDevice();
void setWebsite(std::string);
std::string getWebsite();
void setVisualAid(bool);
bool hasVisualAid();
bool hasWebsite();
};
#endif

