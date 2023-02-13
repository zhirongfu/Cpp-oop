#include <iostream>
#include "Manual.hpp"
#include <regex>
Manual::Manual():Book{},visualaid{0},website{0}
{

}
Manual::Manual(std::string title1,std::string author1,int pagecount1, bool available1,std::string nameofdevice1,std::string url1,bool visualaid1)
:Book{title1,author1,pagecount1,available1},nameofdevice{nameofdevice1},visualaid{visualaid1}
{
const std::regex pattern("((http|https)://)(www.)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)");
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
void Manual::setDevice(std::string device1)
{
nameofdevice=device1;
}
std::string Manual::getDevice()
{
    return nameofdevice;
}
void Manual::setWebsite(std::string url1)
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
}
std::string Manual::getWebsite()
{
    return url;
}
void Manual::setVisualAid(bool truefalse)
{
    visualaid=truefalse;
}
bool Manual::hasVisualAid()
{
    return visualaid;
}
bool Manual::hasWebsite()
{
    return website;
}