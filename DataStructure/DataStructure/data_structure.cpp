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

void single_LinkedList::pushFront(char data)
{
    single_LinkedList_Node* newNode = new(single_LinkedList_Node);
    newNode->data = data;
    newNode->nextNode = NULL;

    if (this->getHeadAdress() == NULL) 
    {
        this->head = *newNode;
    }
    else 
    {
        newNode->nextNode = this->head.nextNode;
        this->head.nextNode = newNode;
    }
}

void single_LinkedList::pushBack(char data)
{
    single_LinkedList_Node* lastNode;
    single_LinkedList_Node* newNode = new(single_LinkedList_Node);
    newNode->data = data;
    newNode->nextNode = NULL;

    lastNode = this->getHeadAdress();    // buffer acts like a marker that points out location

    if (lastNode == NULL)
    {
        this->head = *newNode;
    }

    else 
    {
        while (lastNode->nextNode != NULL)
        {
            lastNode = lastNode->nextNode;
        }

        lastNode->nextNode = newNode;
    }
    
}

char single_LinkedList::popFront(void) // why did you try to set free of static variable ?
{
    char data;
    single_LinkedList_Node* buffer;

    if (this->getHeadAdress() == NULL) 
    {
        return false;
    }
    else 
    {
        buffer = this->head.nextNode;
        data = buffer->data;
        this->head.nextNode = buffer->nextNode;
        free(buffer);
    }

}

char single_LinkedList::popBack(void) 
{
    single_LinkedList_Node* beforeLastNode;
    single_LinkedList_Node* lastNode;
    char data = 0;

    beforeLastNode = this->getHeadAdress();
    if (beforeLastNode == NULL) return false;

    while (beforeLastNode->nextNode->nextNode != NULL)
    {
        beforeLastNode = beforeLastNode->nextNode;
    }

    lastNode = beforeLastNode->nextNode;
    data = lastNode->data;
    beforeLastNode->nextNode = NULL;
    free(lastNode);

    return data;
}


 void single_LinkedList::showList(void)
{
    single_LinkedList_Node* pointer;

    pointer = this->getHeadAdress();    // buffer acts like a marker that points out location

    while(pointer -> nextNode != NULL)
    {
        std::cout << "Data : " << pointer -> data << std::endl;
        pointer = pointer -> nextNode;
    }
    std::cout << "Data : " << pointer->data << std::endl;
}


