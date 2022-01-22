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

//Node for Single/Double Linked List + Single Linked List
struct single_LinkedList_Node 
{
    char data;
    single_LinkedList_Node* nextNode;
};
//single_LinkedList
class single_LinkedList 
{
private :
    single_LinkedList_Node head;
public : 
    single_LinkedList() 
    {
        this->head.data = NULL;
        this->head.nextNode = NULL;
    }
    void pushFront(char data);  // O(1)
    void pushBack(char data); // O(n)
    char popFront(void); // O(1)
    char popBack(void); // O(n)
    void showList(void); // O(n)
    single_LinkedList_Node* getHeadAdress(); // O(1)
    ~single_LinkedList() 
    {
        single_LinkedList_Node* buffer;
        single_LinkedList_Node* deleter;
        buffer = this->getHeadAdress()->nextNode;
        deleter = buffer;
        while (buffer->nextNode != NULL) 
        {
            deleter = buffer;
            buffer = buffer->nextNode;
            free(deleter);
        };
        deleter = buffer;
        free(buffer);
    };
};
//class for circular single linked list
class circular_Single_LinkedList 
{
private :
    single_LinkedList_Node head; // standard point
public :
    circular_Single_LinkedList() 
    {
        this->head.data = NULL;
        this->head.nextNode = &(this->head);
    }
    single_LinkedList_Node* getHeadAdr(); // O(1)
    single_LinkedList_Node* getTailAdr(); // O(n)
    void pushFront(char data); // O(1)
    void pushBack(char data); // O(n)
    char popFront(void); // O(1)
    char popBack(void); // O(n)
};
//class for Double Linked List
struct double_LinkedList_Node 
{
    char data;
    double_LinkedList_Node* prevNode;
    double_LinkedList_Node* nextNode;
};

class double_LinkedList 
{
private:
    double_LinkedList_Node head;
public:
    double_LinkedList() 
    {
        this->head.data = NULL;
        this->head.prevNode = NULL;
        this->head.nextNode = NULL;
    }
    // insert
    void pushFront(char data); //O(1)
    void pushBack(char data);
    void insert(char data, int nodeNum);
    // remove
    char popFront();  //O(1)
    char popBack();
    char remove(int nodeNum);
    // size of list
    int sizeOfList(); //O(n)
    double_LinkedList_Node* getHeadAdr(); //O(1)
    double_LinkedList_Node* getTailAdr(); //O(n)
};