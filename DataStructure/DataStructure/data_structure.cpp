//this file for the functions used at data structure 

#include "data_structure.h"

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
// Single Linked List
single_LinkedList_Node* single_LinkedList::getHeadAdress() 
{
    return &(this->head);
}

void single_LinkedList::pushFront(single_LinkedList_Node node)
{
    
}

void single_LinkedList::pushBack(single_LinkedList_Node &node)
{
    single_LinkedList_Node* buffer;

    buffer = this->getHeadAdress();    // buffer acts like a marker that points out location

    while( buffer->nextNode != NULL )
    { 
        buffer = buffer->nextNode;
    }

    buffer->nextNode = &node;

    std::cout << "PushBack Suceess " << buffer->nextNode << std::endl;
}

char single_LinkedList::popFront(void)
{
    return 0;
}

char single_LinkedList::popBack(void) 
{
    return 0;
}

/*
 void single_LinkedList::showList(void)
{
    single_LinkedList_Node* buffer;

    buffer = (*this).getHeadAdress();    // buffer acts like a marker that points out location

    while((*buffer).nextNode != NULL)
    {
        std::cout << "Data : " << (*buffer).data << std::endl;
        buffer = (*buffer).nextNode;
    }
}
*/

