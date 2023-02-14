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
/**
  Parameterized constructor.
  @param     : The title of the book (a string)
  @param     : The author of the book (a string)
  @param     : The number of pages in the book (a positive integer)
  @param     : The name of the device (a string)
  @param     : A flag indicating whether the book is in digital form
                with DEFAULT VALUE False (a Boolean)
  @param     : The URL that is in the format
                'https://www.something.something'
                or 'http://www.something.something'
                with the last 'something' being at least 2 characters
                with DEFAULT VALUE empty string (a string)
  @param     : A Boolean indicating the presence of a visual aid
                with DEFAULT VALUE False
  @post      : The private members are set to the values of the
                corresponding parameters.
                If a URL is provided, the website flag is set to True.
                If the URL is ill-formatted, the website is set to
                empty string and the website flag is set to False.
*/
Manual(std::string title1,std::string author1,int pagecount1,std::string nameofdevice1, bool available1=false,std::string url1="",bool visualaid1=false);
void setDevice(std::string);
std::string getDevice();
bool setWebsite(std::string);
std::string getWebsite();
void setVisualAid(bool);
bool hasVisualAid();
bool hasWebsite();
};
#endif

