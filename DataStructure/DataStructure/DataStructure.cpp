// this file is for studying data structure by programming data structure without any library
// Programming language is C++
// data type is "char"

#include <iostream>
#include <list>

//stack
class stack
{
private :
    std::list <char> container;
public : 
    void stackPush(char data);
    char stackPop(void);
    int stackSize();
};
//queue
class queue
{
private:
    std::list <char> container;
public:
    void enqueue(char data);
    char dequeue(void);
    int queueSize(void);
};
//deque : stack + queue
class deque 
{
private:
    std::list <char> container;
public:
    void pushLeft(char data);
    char dequekPop(void);
    void pushRight(char data);
    char dequeue(void);
    int dequeSize(void);
};

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
    

}

//stack function
void stack::stackPush(char data)
{
    (*this).container.push_back(data);
}

char stack::stackPop(void)
{
    if ((*this).container.empty())
    {
        return 0;
    }
    else
    {
        char data = (*this).container.back();
        (*this).container.pop_back();
        return data;
    }
}

int stack::stackSize()
{
    return (*this).container.size();
}

//queue function
void queue::enqueue(char data)
{
    (*this).container.push_back(data);
}

char queue::dequeue(void)
{
    if ((*this).container.empty())
    {
        return 0;
    }
    else
    {
        char data = (*this).container.front();
        (*this).container.pop_front();
        return data;
    }
}

int queue::queueSize(void) 
{
    return (*this).container.size();
}

//deque function

void deque::pushLeft(char data) 
{
    (*this).container.push_front(data);
}
char deque::dequekPop(void) 
{
    if ((*this).container.empty())
    {
        return 0;
    }
    else
    {
        char data = (*this).container.back();
        (*this).container.pop_back();
        return data;
    }
}
void deque::pushRight(char data) 
{
    (*this).container.push_back(data);
}
char deque::dequeue(void) 
{
    if ((*this).container.empty())
    {
        return 0;
    }
    else
    {
        char data = (*this).container.front();
        (*this).container.pop_front();
        return data;
    }
}
int deque::dequeSize(void) 
{
    return (*this).container.size();
}

