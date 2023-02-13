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
    Novel(std::string title1,std::string author1,int pagecount1, bool available1,std::string genre1,bool filmadaptation1);
    std::string getGenre();
    void setGenre(std::string);
    std::vector<std::string> getCharacterList();
    std::string getCharacterListString();
    void addCharacter(std::string);
    bool hasFilmAdaptation();
    void setFilmAdaptation();
    double getAverageRating();
    review createReview(double score1,std::string rating1);
    void addReview(review);
    void calculateAverageRating();

};
#endif