// this file is for studying data structure by programming data structure without any library
// Programming language is C++
// data type is "char"

#include <iostream>

/*
List : List has lots of commons with arrays, but there is difference at how the data is saved.
function explain
append() : 마지막 위치에 데이터를 넣을 것
insert() : 원하는 위치에 데이터를 넣을 것
pop() :  마지막 위치의 데이터를 꺼낼 것
remove() : 원하는 위치의 데이터를 꺼내고, 이를 조정할 것
*/ 

class list {
private :
    char** basket;
    int len;
    int count;
public :    
    list() 
    {
        basket = new char*[10];
        len = 10;
        count = 0;
    };
    //get data
    char** getbasket();
    int getLen();
    int getCount();
    //method for add
    void append(char data);
    //void insert(int pos, char data);
    //method for remove
    //char pop();
    //char remove(int pos);
    //method for count
    //int word_count();
};
//function : get data from list(basket, len, count)
char** list::getbasket() 
{
    return (*this).basket;
}
int list::getLen() 
{
    return (*this).len;
}
int list::getCount() 
{
    return (*this).count;
}
//function : append
void list::append(char data)
{
    int count = sizeof((*this).basket) + 1;
    int len_buffer = 0;
    char* databox;
    databox = new char;
    *databox = data;

    if (count > (*this).len)
    {
        len_buffer = (*this).len * 2;
        char** buffer_basket = new char* [len_buffer];
        for (int i = 0; i < len_buffer; i++)
        {
            buffer_basket[i] = (*this).basket[i];
        }
        (*this).basket = buffer_basket;
        (*this).basket[count + 1] = databox;
        (*this).len = len_buffer;
    }
    else
    {
        (*this).basket[count + 1] = databox;
    }

}
/*
//function : insert
void list::insert(int pos, char data)
{
    int count = sizeof((*this).basket) + 1;
    int len_buffer = 0;
    char* databox;
    databox = new char;
    *databox = data;
    if (count > (*this).len) 
    {
    }
    else 
    {
    }
}
//function : pop
char list::pop()
{
}
//function : remove
char list::remove(int pos)
{
}
//function : count

int list::word_count()
{
}
*/

int main()
{
    list A;
    char alpha[10] = {0, };
    A.append('a');
    A.append('b');
    A.append('c');
    A.append('d');
    A.append('e');
    A.append('f');
    A.append('g');
    A.append('h');
    A.append('i');
    A.append('j');

    for (int i = 0; i < sizeof(A.getbasket()); i++)
    {
        alpha[i] = *(A.getbasket()[i]);
        std::cout << "A : " << A.getbasket()[i] <<" : " << alpha[i];
        std::cout << "\n";
    }

}

