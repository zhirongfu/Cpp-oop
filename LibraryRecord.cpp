#include <iostream>
#include "LibraryRecord.hpp"
bool LibraryRecord::checkIn(Book book2) 
{    
    return(add(book2));
}
bool LibraryRecord::checkOut(Book book2)
{
    if((remove(book2))==true)
    {
        checkedout.push_back(book2);
        return true;
    }
    else
        return false;   
}
int LibraryRecord::getCheckOutHistory(Book book2)
{
    int j=0;
    for(int i=0;i<checkedout.size();i++)
    {
        if(checkedout[i]==book2)
        {
            j+=1;
        }
    }
    return j;
}
void LibraryRecord::display()
{
    for(int i=0;i<(item_count_);i++)
    {
        items_[i].display();
        std::cout<<"It has been checked out "+std::to_string(getCheckOutHistory(items_[i]))+" times.\n";
    }
}
void LibraryRecord::displayTitles()
{
    for(int i=0;i<(getCurrentSize()-1);i++)
    {
        std::cout<<items_[i].getTitle()+", ";
    }
    std::cout<<items_[(item_count_-1)].getTitle()+"!\n";
}
bool LibraryRecord::duplicateStock()
{
    if(item_count_<1||((item_count_*2)>DEFAULT_CAPACITY))
    {
        return false;
    }
    else
    {
        int j=item_count_;
        for(int i=0;i<j;i++)
        {
            add(items_[i]);
        }
        return true;
    }
}
bool LibraryRecord::removeStock(Book book2)
{
    bool j=false;
    for(int i=0;i<item_count_;i++)
    {
        if((remove(book2))==true)
        {
            j=true;
        }
    }
    return j;
}
bool LibraryRecord::equivalentRecords(LibraryRecord libraryrecord2)
{
    if(item_count_==libraryrecord2.getCurrentSize())
    {
        for(int i=0;i<item_count_;i++)
        {
            if((getFrequencyOf(items_[i]))!=(libraryrecord2.getFrequencyOf(items_[i])))
            {
                return false;
            }
        }
    }
    else
        return true;
}
void LibraryRecord::operator +=(LibraryRecord libraryrecord2)
{
    if((item_count_+(libraryrecord2.getCurrentSize()))<DEFAULT_CAPACITY)
    {
        for(int i=0;i<libraryrecord2.getCurrentSize();i++)
        {
            add(libraryrecord2.items_[i]);
            for(int j=0;j<getCheckOutHistory(libraryrecord2.items_[i]);j++)
            {
                checkOut(libraryrecord2.items_[i]);
            }
        }
    }
}
void LibraryRecord::operator /=(LibraryRecord libraryrecord2)
{
   if((item_count_+(libraryrecord2.getCurrentSize()))<DEFAULT_CAPACITY)
    {
        for(int i=0;i<libraryrecord2.getCurrentSize();i++)
        {
            if(getFrequencyOf(libraryrecord2.items_[i])==0)
            {
                add(libraryrecord2.items_[i]);
            }
            for(int j=0;j<getCheckOutHistory(libraryrecord2.items_[i]);j++)
            {
                checkOut(libraryrecord2.items_[i]);
            }
        }
    } 
}


