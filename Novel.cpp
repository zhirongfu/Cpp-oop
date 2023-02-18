#include "Novel.hpp"
#include <iostream>
#include <vector>
Novel::Novel():genre{""},averagerating{0},filmadaptation{false}//default constructor
{

}
Novel::Novel(std::string title1,std::string author1,int pagecount1,std::string genre1,bool available1,bool filmadaptation1)
:Book{title1,author1,pagecount1,available1},genre{genre1},filmadaptation{filmadaptation1}//param constructor
{

}
std::string Novel::getGenre()const//returns genre of novel
{
    return genre;
}
void Novel::setGenre( std::string genre1)//sets genre of novel
{
    genre=genre1;
}
std::vector<std::string> Novel::getCharacterList()const//returns vecor of string for charcterlist
{
    return characterlist;
}
std::string Novel::getCharacterListString()const//returns the vector into string equal
{
    std::string fulllist="";
    for(int i=0;i<characterlist.size();i++)
    {
        fulllist+=(characterlist.at(i)+" ");        
    }
    return fulllist;
}
void Novel::addCharacter(std::string addedchar)//adds charcter
{
    characterlist.push_back(addedchar);
}
bool Novel::hasFilmAdaptation()const//if film has film adapt
{
    return filmadaptation;
}
void Novel::setFilmAdaptation()//sets film adapt to true
{
    filmadaptation=1;
}
double Novel::getAverageRating()const//returns avg rating
{
    return averagerating;
}
review Novel::createReview(double score1,std::string rating1)const//creates new review
{
review myreview;
if(score1>=0)
{
myreview.score_=score1;
myreview.rating_=rating1;
return myreview;    
}
}
void Novel::addReview(review areview)//adds review to vector
{
    reviews.push_back(areview);
}
void Novel::calculateAverageRating()//calculates avg rating of all reviews
{
    double avg=0;
    for(int i=0;i<reviews.size();i++)
    {
        avg+=reviews[i].score_;
    }
    averagerating=(avg/reviews.size());
}