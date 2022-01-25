// this file is for studying data structure by programming data structure without any library
// Programming language is C++
// data type is "char"

#include "data_structure.h"

int main()
{
    double_LinkedList A;

    std::cout << "Head Adr : " << A.getHeadAdr() << std::endl;

    for (int i = 0; i < 10; i++) 
    {
        A.pushBack('a' + i);
    }

    std::cout << "Tail Adr/size : " << A.getTailAdr() << " , " << A.sizeOfList() << std::endl;

    for (int i = 0; i < 10; i++)
    {
        std::cout<< A.popBack() << std::endl;
    }
  
}

//what need to fix : Tail Adr, size


