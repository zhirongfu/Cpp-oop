#include <iostream>
#include "Book.hpp"
#include "Book.cpp"
#include "Manual.hpp"
#include "Manual.cpp"
#include "Textbook.hpp"
#include "Textbook.cpp"
#include "Novel.hpp"
#include "Novel.cpp"

 int main(){
   Book book1("moby dick","jason",236,true);
   book1.display();
     
 }
/**
 * 
  Novel my_novel;
    my_novel.getGenre();
    my_novel.addCharacter("Hello World!");
    my_novel.addCharacter("joe");
    my_novel.addCharacter("mama");
    my_novel.addCharacter("pizza");
    //std::cout<<my_novel.getCharacterList();
    std::cout<<my_novel.getCharacterListString();
    my_novel.createReview(9.5,"good");
    my_novel.addReview(my_novel.createReview(9.5,"good"));
    my_novel.addReview(my_novel.createReview(9.2,"ok"));
    my_novel.addReview(my_novel.createReview(5.2,"bad"));
    my_novel.addReview(my_novel.createReview(4.5,"bad"));
    my_novel.calculateAverageRating();
    std::cout<<my_novel.getAverageRating();

    }
 * Textbook my_textbook; 
    std::cout<<my_textbook.getSubject()<<std::endl;
    my_textbook.setGradeLevel(JUNIOR_HIGH);
    std::cout<<my_textbook.getGradeLevel()<<std::endl;
    std::cout<<my_textbook.checkReviewQuestions()<<std::endl;
    std::cout<<my_textbook.getTitle()<<std::endl;
    std::cout<<my_textbook.getAuthor()<<std::endl;
    std::cout<<my_textbook.isDigital()<<std::endl;
    std::cout<<my_textbook.getPageCount()<<std::endl;  
    Manual my_manual;
    std::cout<<my_manual.getDevice()<<std::endl;
    std::cout<<my_manual.getWebsite()<<std::endl;
    std::cout<<my_manual.hasVisualAid()<<std::endl;
    std::cout<<my_manual.hasWebsite()<<std::endl;
    my_manual.setWebsite("https://geeksforgeeks.org/check-if-an-url-is-valid-or-not-using-regular-expression/");
    std::cout<<my_manual.getWebsite()<<std::endl;
    std::cout<<my_manual.getAuthor()<<std::endl;
    std::cout<<my_manual.getPageCount()<<std::endl;
    std::cout<<my_manual.isDigital()<<std::endl;
    std::cout<<my_manual.hasWebsite()<<std::endl;
    Manual my_manual1("joes book","joe",232,"phone",1,"https://www.geeksforgeeks.org/check-if-an-url-is-valid-or-not-using-regular-expression/");
    std::cout<<my_manual1.getDevice()<<std::endl;
    std::cout<<my_manual1.getWebsite()<<std::endl;
    std::cout<<my_manual1.hasVisualAid()<<std::endl;
    std::cout<<my_manual1.hasWebsite()<<std::endl;
    std::cout<<my_manual1.getAuthor()<<std::endl;
    std::cout<<my_manual1.getPageCount()<<std::endl;
    std::cout<<my_manual1.isDigital()<<std::endl;
    return 0;
/***/