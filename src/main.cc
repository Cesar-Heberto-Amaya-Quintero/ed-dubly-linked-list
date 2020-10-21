#include <iostream>
#include "List.hh"

int main ()
{
    List* list {new List()};

    //std::cout << "Hello list" << std::endl;

    list->AddFront(new Book("libro 1","autor 1"));
    list->AddFront(new Book("libro 2","autor 2"));
    list->AddFront(new Book("libro 3","autor 3"));
    list->AddFront(new Book("libro 4","autor 4"));
    //list->AddBack(new Book ("libro 5", "autor 5"));
    
    //list->AddBack(new Book ("libro 6", "autor 6"));
    list->PrintBack();
    std::cout << std::endl;
    std::cout << std::endl;
    list->RemoveBack();
    list->PrintBack();

    std::cin.get();

    return 0;
}