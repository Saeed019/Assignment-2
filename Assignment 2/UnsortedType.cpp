#include"UnsortedType.h"
#include<iostream>
#include <exception>
using namespace std;
template class UnsortedType<NumberInfo>;

template<class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
    length=0;
    listData=NULL;
    

}
template<class ItemType>
int UnsortedType<ItemType>::LengthIs()
{
    return length;
}
template<class ItemType>
bool UnsortedType<ItemType>::IsFull()
{
  NodeType* location;
  try
  {
      location = new NodeType;
      delete location;
      return false;
  }
  catch(bad_alloc exception)
  {
      return true;
  }
}
template<class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType item)
{
 NodeType* location;
 location = new NodeType;
 location->info=item;
 location->next=listData;
listData = location;
 length++;

}
template<class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item)
{
    NodeType* location = listData;
    NodeType* tempLocation = NULL;
    if((listData->info.is_equal(item)))
    {
        tempLocation = location;
        listData = listData->next;

    }
    else
    {
        while(!(location->next->info.is_equal(item)))
        {
            location = location->next;
            tempLocation = location->next;
            location->next = (location->next)->next;

        }
        delete tempLocation;
        length--;

    }
}

template<class ItemType>
void UnsortedType<ItemType>::MakeEmpty()
{
    NodeType* tempPtr;
    while(listData!=NULL)
    {
        tempPtr = listData;
        listData= listData->next;
        delete tempPtr;

    }
}

template<class ItemType>
UnsortedType<ItemType>::~UnsortedType()
{
    MakeEmpty();
}

template<class ItemType>
void UnsortedType<ItemType>::print()
{
    NodeType *temp =listData;
   while(temp!=NULL)
   {
       temp->info.print();
       temp=temp->next;
        cout<<endl;
   }
}

