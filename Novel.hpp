#pragma once
#ifndef NOVEL_H
#define NOVEL_H
#include "Book.hpp"
#include <iostream>
#include <vector>
struct review {
    double score_;
    std::string rating_;
};
class Novel:public Book
{
private:
    std::string genre;
    std::vector<std::string> characterlist;
    std::vector<review> reviews;
    double averagerating;
    bool filmadaptation;
public:
    Novel();
    Novel(std::string title1,std::string author1,int pagecount1,std::string genre1,bool available1=false,bool filmadaptation1=false);
    std::string getGenre()const;
    void setGenre(const std::string);
    std::vector<std::string> getCharacterList()const;
    std::string getCharacterListString()const;
    void addCharacter(const std::string);
    bool hasFilmAdaptation()const;
    void setFilmAdaptation();
    double getAverageRating()const;
    review createReview(const double score1,const std::string rating1)const;
    void addReview(const review);
    void calculateAverageRating();

};
#endif