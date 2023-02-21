#pragma once
#ifndef NOVEL_H
#define NOVEL_H
#include "Book.hpp"
#include <iostream>
#include <vector>
struct review {//structure to be used
    double score_;
    std::string rating_;
};
class Novel:public Book
{
private://private data members
    std::string genre;//genre of novel
    std::vector<std::string> characterlist;//vector of characters
    std::vector<review> reviews;//vector of reviews
    double averagerating;//avg rating of reviews
    bool filmadaptation;//flag for if novel has film adaptation
public:
    Novel();//default constructor
    Novel(std::string title1,std::string author1,int pagecount1,std::string genre1,bool available1=false,bool filmadaptation1=false);//param constructor
    std::string getGenre()const;//returns genre of novel
    void setGenre(const std::string);//sets genre
    std::vector<std::string> getCharacterList()const;//returns vecor of string for charcterlist
    std::string getCharacterListString()const;//returns the vector into string equal
    void addCharacter(const std::string);//adds charcter
    bool hasFilmAdaptation()const;//if film has film adapt
    void setFilmAdaptation();//sets film adapt to true
    double getAverageRating()const;//returns avg rating
    review createReview(const double&score1,const std::string rating1);//creates new review
    void addReview(const review);//adds review to vector
    void calculateAverageRating();//calculates avg rating of all reviews

};
#endif