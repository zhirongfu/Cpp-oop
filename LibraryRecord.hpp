#pragma once
#ifndef LIBRARYRECORD_H
#define LIBRARYRECORD_H
#include "Book.hpp"
#include "ArrayBag.hpp"
#include <iostream>
#include <vector>
template <class ItemType>
class LibraryRecord: public ArrayBag <ItemType>, Book
{
private:
    std::vector<Book> checkedout;
public:
    bool checkIn(Book);
    bool checkOut(Book);
    int getCheckOutHistory(Book);
    void display();
    void displayTitles();
    bool duplicateStock();
    bool removeStock(Book);
    bool equivalentRecords(LibraryRecord);
    void operator +=(LibraryRecord);
    void operator /=(LibraryRecord);
};
#include "LibraryRecord.cpp"
#endif
