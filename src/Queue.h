
#ifndef Queue_hpp
#define Queue_hpp
#include <iostream>
#include "SmartPointer.h"
#include <assert.h>
template <class T>
struct Node{
    Node(const T &value) : item(value), next(0){}
    T item;
    SmartPointer<Node<T> > next;
};

template <class T>
class Queue{
public:
    Queue();
    bool push_back(const T &item);
    T pop();
    T front() const;
    bool isEmpty() const {return m_size == 0;}
    ~Queue(){}; //empty destructor
    
    
    
    
private:
    SmartPointer<Node<T> > head;
    SmartPointer<Node<T> > tail;
    int m_size;
};

#include "Queue.cpp.h"






#endif /* Queue_hpp */
