// this file is for studying data structure by programming data structure without any library
// Programming language is C++
// data type is "char"

#include "data_structure.h"

int main()
{
    
    circular_Single_LinkedList E;
    for(int i = 0; i < 10 ; i++)
    E.pushBack('a' + i);

    for (int i = 0; i < 10; i++)
    std::cout<<E.popBack()<<std::endl;

    for (int i = 0; i < 10; i++)
        E.pushBack('a' + i);
}


