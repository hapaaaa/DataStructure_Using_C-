// this file is for studying data structure by programming data structure without any library
// Programming language is C++
// data type is "char"

#include "data_structure.h"

int main()
{
    
    single_LinkedList D;

    for (int i = 0; i < 10; i++)
    {
        D.pushFront('a' + i);
    }

    D.showList();

    std::cout << std::endl;

    

    D.showList();


}


