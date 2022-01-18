//this heather file for data structure

#include <iostream>
#include <list>

//stack
class stack
{
private:
    std::list <char> container;
public:
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

//Node for Single Linked List + Single Linked List
struct single_LinkedList_Node 
{
    char data;
    single_LinkedList_Node* nextNode;
};

class single_LinkedList 
{
private :
    single_LinkedList_Node head;
public : 
    single_LinkedList() 
    {
        this->head.data = 'H';
        this->head.nextNode = NULL;
    }
    void pushFront(single_LinkedList_Node node);
    void pushBack(char data);
    char popFront(void);
    char popBack(void);
    void showList(void);
    single_LinkedList_Node* getHeadAdress();
};
