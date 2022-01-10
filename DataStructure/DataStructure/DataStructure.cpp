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
    void enque(char data);
    char deque(void);
    int queueSize(void);
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
    B.enque('A');
    B.enque('B');
    B.enque('C');
    B.enque('D');
    std::cout << std::endl;
    std::cout << "size of queue : " << B.queueSize() << std::endl;
    std::cout << "deque #1 : " << B.deque() << std::endl;
    std::cout << "deque #2 : " << B.deque() << std::endl;
    std::cout << "deque #3 : " << B.deque() << std::endl;
    std::cout << "deque of queue : " << B.queueSize() << std::endl;
    std::cout << "deque #4 : " << B.deque() << std::endl;
    std::cout << "size of stack : " << B.queueSize() << std::endl;

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
void queue::enque(char data)
{
    (*this).container.push_back(data);
}

char queue::deque(void)
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

