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
}

