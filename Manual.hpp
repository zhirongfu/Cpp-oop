#pragma once
#ifndef MANUAL_H
#define MANUAL_H
#include "Book.hpp"
#include <iostream>
#include <string>
class Manual:public Book
{
private://private data members
    std::string url;//url of website
    std::string nameofdevice;//name of device
    bool visualaid;//flag for if manual has visual adi
    bool website;//flag for if manual has website
public:
Manual();//default constructor
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
Manual(std::string title1,std::string author1,int pagecount1,std::string nameofdevice1, bool available1=false,std::string url1="",bool visualaid1=false);//param constructor
void setDevice(const std::string);//sets device used
std::string getDevice()const;//returns device used
bool setWebsite(const std::string);//sets url as website
std::string getWebsite()const;//returns url
void setVisualAid(const bool);//sets visual flag to param
bool hasVisualAid()const;//returns flag for visual aid
bool hasWebsite()const;//returns flag for website
};
#endif

