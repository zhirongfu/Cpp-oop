//Zhi Fu         zhi.fu57@myhunter.cuny.edu         2/18/23
#include <iostream>
#include "Manual.hpp"
#include "Book.hpp"
#include <regex>
Manual::Manual():visualaid{false},website{false},url{""},nameofdevice{""}//default constructor
{

}
Manual::Manual(std::string title1,std::string author1,int pagecount1,std::string nameofdevice1, bool available1,std::string url1,bool visualaid1)
:Book(title1,author1,pagecount1,available1),nameofdevice{nameofdevice1},visualaid{visualaid1}//param constructor
{
const std::regex pattern("((http|https)://)(www.)[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)");
if(regex_match(url1, pattern))
{
    url=url1;
    website=true;
}
else
{
    url="";
    website=false;
}
}
void Manual::setDevice(const std::string& device1)//sets device used
{
nameofdevice=device1;
}
std::string Manual::getDevice()const//returns device used
{
    return nameofdevice;
}
bool Manual::setWebsite(const std::string& url1)//sets url as website
{
const std::regex pattern("((http|https)://)(www.)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)");
if(regex_match(url1, pattern))
{
    url=url1;
}
else
{
    url="Broken Link";
}
website=true;
return website;
}
std::string Manual::getWebsite()const//returns url
{
    return url;
}
void Manual::setVisualAid(bool truefalse)//sets visual flag to param
{
    visualaid=truefalse;
}
bool Manual::hasVisualAid()const//returns flag for visual aid
{
    return visualaid;
}
bool Manual::hasWebsite()const//returns flag for website
{
    return website;
}