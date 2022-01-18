// this file is for studying data structure by programming data structure without any library
// Programming language is C++
// data type is "char"

#include "data_structure.h"

int main()
{
    stack A;
    A.stackPush('a');
    A.stackPush('b');
    A.stackPush('c');
    A.stackPush('d');
    std::cout << "size of stack : "<< A.stackSize() << std::endl;
    std::cout << "pop #1 : " << A.stackPop() << std::endl;
    std::cout << "pop #2 : " << A.stackPop() << std::endl;
    std::cout << "pop #3 : " << A.stackPop() << std::endl;
    std::cout << "size of stack : " << A.stackSize() << std::endl;
    std::cout << "pop #4 : " << A.stackPop() << std::endl;
    std::cout << "size of stack : " << A.stackSize() << std::endl;

    queue B;
    B.enqueue('A');
    B.enqueue('B');
    B.enqueue('C');
    B.enqueue('D');
    std::cout << std::endl;
    std::cout << "size of queue : " << B.queueSize() << std::endl;
    std::cout << "deque #1 : " << B.dequeue() << std::endl;
    std::cout << "deque #2 : " << B.dequeue() << std::endl;
    std::cout << "deque #3 : " << B.dequeue() << std::endl;
    std::cout << "deque of queue : " << B.queueSize() << std::endl;
    std::cout << "deque #4 : " << B.dequeue() << std::endl;
    std::cout << "size of stack : " << B.queueSize() << std::endl;

    deque C;
    C.pushRight('c');
    C.pushRight('d');
    C.pushLeft('a');
    C.pushLeft('b');
    std::cout << "deque : " << C.dequekPop() << std::endl;
    std::cout << "deque : " << C.dequekPop() << std::endl;
    std::cout << C.dequeSize() << std::endl;
    std::cout << "deque : " << C.dequekPop() << std::endl;
    std::cout << "deque : " << C.dequekPop() << std::endl;
    C.pushRight('c');
    C.pushRight('d');
    C.pushLeft('a');
    C.pushLeft('b');
    std::cout << "deque : " << C.dequeue() << std::endl;
    std::cout << "deque : " << C.dequeue() << std::endl;
    std::cout << C.dequeSize() << std::endl;
    std::cout << "deque : " << C.dequeue() << std::endl;
    std::cout << "deque : " << C.dequeue() << std::endl;

    single_LinkedList D;
    extern single_LinkedList_Node sNode[10];
    for (int i = 0; i < 10; i++) 
    {
        sNode[i].data = 'a' + i;
        sNode[i].nextNode = NULL;
        D.pushBack(sNode[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout<< "Node 현재 주소 : " << &sNode[i] << " Node 현재 값 : " << sNode[i].data << " Node 다음 주소 : " << sNode[i].nextNode << std::endl;
    }

   // D.showList();

}


