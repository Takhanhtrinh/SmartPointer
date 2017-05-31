
#include <iostream>
#include "SmartPointer.h"
#include <string>
#include "Queue.h"
int main(int argc, const char * argv[]) {
    Queue<int> a;
    for (int i = 0; i < 10; i++) {
        a.push_back(i);
    }
    while (!a.isEmpty()) {
        std::cout << a.pop() << std::endl;
    }
    
    
    return 0;
}
