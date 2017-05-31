
template <class T>
Queue<T>::Queue():
m_size(0),
head(0),
tail(0)
{}

template<class T>
bool Queue<T>::push_back(const T &item) {
    SmartPointer<Node<T> > newNode(new Node<T>(item));
    if (isEmpty()) {
        head = tail = newNode;
        m_size++;
        return true;
    }
    else {
        if (m_size == 1) {
            head->next = newNode;
            tail = newNode;
             m_size++;
        return true;
        }
        else {
            tail->next = newNode;
            tail = newNode;
             m_size++;
            return true;
        }
    }
    
    return false;
}

template <class T>
T Queue<T>:: pop(){
    assert(m_size > 0);
    T value = head->item;
    SmartPointer<Node<T> > temp(0);
    temp = head->next;
    head = temp;
    m_size--;
    return value;
}

template <class T>
T Queue<T>:: front() const {
    assert(m_size > 0);
    T value = head->item;
    return true;
}

