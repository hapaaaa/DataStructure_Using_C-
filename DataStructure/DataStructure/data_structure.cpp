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

 //Circular Single Linked List
 single_LinkedList_Node* circular_Single_LinkedList::getHeadAdr() 
 {
     return &(this->head);
 }

 single_LinkedList_Node* circular_Single_LinkedList::getTailAdr() 
 {
     single_LinkedList_Node* point = &(this->head);
     while (point->nextNode != &(this->head))
         point = point->nextNode;
     return point;
 }
 void circular_Single_LinkedList::pushFront(char data) 
 {
     single_LinkedList_Node* newNode = new(single_LinkedList_Node);

     newNode->data = data;
     newNode->nextNode = &(this->head);

     if (this->head.nextNode == &(this->head))
         newNode->nextNode = &(this->head);
     else 
         newNode->nextNode = this->head.nextNode;
     this->head.nextNode = newNode;
     std::cout<< "Push Successed : " << data << std::endl;
 }

 void circular_Single_LinkedList::pushBack(char data) 
 {
     single_LinkedList_Node* lastNode = this->getTailAdr();
     single_LinkedList_Node* newNode = new(single_LinkedList_Node);

     newNode->data = data;
     newNode->nextNode = &(this->head);

     lastNode->nextNode = newNode;

     std::cout << "Push Successed : " << data << std::endl;
 }

 char circular_Single_LinkedList::popFront(void) 
 {
     char data;
     single_LinkedList_Node* buffer;

     if (this->head.nextNode == &(this->head)) return false;

     buffer = this->head.nextNode;
     if (buffer->nextNode == &(this->head)) this->head.nextNode = &(this->head);
     else this->head.nextNode = buffer->nextNode;

     data = buffer->data;

     free(buffer);

     return data;
 }
 
 char circular_Single_LinkedList::popBack(void) 
 {
     char data;
     single_LinkedList_Node* beforeLast;
     single_LinkedList_Node* last;
     beforeLast = &(this->head);
     last = beforeLast->nextNode;

     if (this->head.nextNode == &(this->head)) return 'N';
     else 
     {
         if (last->nextNode == &(this->head))
         {
             data = last->data;
             this->head.nextNode = &(this->head);
             free(last);
             return data;
         }

         else
         {
             while (last->nextNode == &(this->head))
             {
                 beforeLast = beforeLast->nextNode;
                 last = beforeLast->nextNode;
             }
             data = last->data;
             beforeLast->nextNode = &(this->head);
             free(last);
             return data;
         }
     }
     

     
       
 }

 //Double Linked List
 // insert
 void double_LinkedList::pushFront(char data)
 {
 }
 void double_LinkedList::pushBack(char data)
 {
 }
 void double_LinkedList::insert(char data, int nodeNum)
 {
 }
 // remove
 char double_LinkedList::popFront()
 {
 }
 char double_LinkedList::popBack()
 {
 }
 char double_LinkedList::remove(int nodeNum)
 {
 }
 // size of list
 int sizeOfList() {}
 double_LinkedList_Node* double_LinkedList::getHeadAdr() 
 {
     return &(this->head);
 }

 double_LinkedList_Node* double_LinkedList::getTailAdr() {}
 
 
     


