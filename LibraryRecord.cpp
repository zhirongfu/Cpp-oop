#include <iostream>
#include "LibraryRecord.hpp"
template <class ItemType>
bool LibraryRecord<ItemType>::checkIn(Book book2) 
{
    return(ArrayBag<ItemType>add(book2));
}
template <class Itemtype>
bool LibraryRecord<Itemtype>::checkOut(Book book2)
{
    if((remove(book2))==true)
    {
        checkedout.push_back(book2);
        return true;
    }
    else
        return false;   
}
template <class Itemtype>
int LibraryRecord<Itemtype>::getCheckOutHistory(Book book2)
{
    for(int i=0;i<checkedout.size();i++)
    {
        int j=0;
        if(checkedout[i]==book2)
        {
            j+=1;
        }
    }
    return j;
}
template <class Itemtype>
void LibraryRecord<Itemtype>::display()
{
    for(int i=0;i<items_.size();i++)
    {
        items_[i].display();
        std::cout<<"It has been checked out "+std::to_string(getCheckOutHistory(items_[i]))+" times.\n";
    }
}
template <class Itemtype>
void LibraryRecord<Itemtype>::displayTitles()
{
    for(int i=0;i<(getCurrentSize()-1);i++)
    {
        std::cout<<items_[i].getTitle()+", ";
    }
    std::cout<<items_[(items_.size()-1)]+"!\n";
}
template <class Itemtype>
bool LibraryRecord<Itemtype>::duplicateStock()
{
    if(item_count_<1||((items_.size()*2)>DEFAULT_CAPACITY))
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
template <class Itemtype>
bool LibraryRecord<Itemtype>::removeStock(Book book2)
{
    bool j=false;
    for(int i=0;i<item_count_<<i++)
    {
        if((remove(book2))==true)
        {
            j=true;
        }
    }
    return j;
}
template <class Itemtype>
bool LibraryRecord<Itemtype>::equivalentRecords(LibraryRecord libraryrecord2)
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
template <class Itemtype>
void LibraryRecord<Itemtype>::operator +=(LibraryRecord libraryrecord2)
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
template <class Itemtype>
void LibraryRecord<Itemtype>::operator /=(LibraryRecord libraryrecord2)
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


