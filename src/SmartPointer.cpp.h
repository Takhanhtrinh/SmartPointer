

template <class T>
SmartPointer<T>::SmartPointer ( T* ptr):
_ptr(ptr),
rf(0)
{
    if (_ptr) {
        rf = new RefenceCount;
        rf->add();
    }
    
}

template<class T>
T& SmartPointer<T>::operator*(){
    return *_ptr;
}
template <class T>
T* SmartPointer<T>::operator->(){
    return _ptr;
}

template <class T>
SmartPointer<T>::~SmartPointer (){
    if (rf) {
        if (rf->release() == 0 && _ptr != NULL){
            delete _ptr;
            delete rf;
        }
    }
}
template<class T>
SmartPointer<T>& SmartPointer<T>:: operator= (const SmartPointer<T>& rhs){
    if (this != &rhs) {
        if (rf != NULL) {
            if (rf->release()== 0 && _ptr) {
                delete _ptr;
                delete rf;
            }
        }
        _ptr = rhs._ptr;
        rf = rhs.rf;
        if (rf) {
            rf->add();
        }
    }
    
    return *this;
}

