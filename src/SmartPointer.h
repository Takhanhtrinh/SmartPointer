
#ifndef SmartPointer_h
#define SmartPointer_h
#include <iostream>
#include <stdint.h>
class RefenceCount{
public:
    int add() {
        count++;
        return count;
    }
    int release() {
        count--;
        return count;
    }
private:
    int count;
};

template <class T>
class SmartPointer{
    
public:
    SmartPointer ( T* ptr = 0);
    T* get(){return _ptr;}
    T& operator*();
    T *operator->();
    ~SmartPointer();
    SmartPointer &operator= (const SmartPointer& rhs);
    
private:
    T * _ptr;
    RefenceCount *rf;
    
    
};

#include "SmartPointer.cpp.h"
#endif /* SmartPointer_hpp */
