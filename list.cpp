#include <iostream>
#include "list.h"
#include "node.h"

template <class type>
List<type>::List(){
    front=back=nullptr;
    n=0;
}

template <class type>
List<type>::~List(){
    front=back=nullptr;
    n=0;
}

template <class type>
bool List<type>::pushFront(type *obj){
    Node<type> *P = Node<type>::montaNode(obj);

    if(!P){
        return false;
    }

    if(!front){
        front = P;
        back = P;
        P->next = nullptr;
        P->prev = nullptr;
        n++;
        return true;
    }

    front->prev = P;
    P->next = front;
    P->prev = nullptr;
    front = P;
    n++;
    return true;
}

template <class type>
bool List<type>::pushBack(type *obj){
    Node<type> *P = Node<type>::montaNode(obj);

    if(!P){
        return false;
    }

    if(!front){
        front = P;
        back = P;
        P->next = nullptr;
        P->prev = nullptr;
        n++;
        return true;
    }
    
    back->next = P;
    P->next = nullptr;
    P->prev = back;
    back = P;
    n++;
    return true;
}

template <class type>
bool List<type>::popFront(type *obj){
    if(!front){
        return false;
    }

    Node<type> *P = front;

    front = front->next;
    if(!front){
        back = nullptr;
    }
    Node<type>::desmontaNode(P, obj);
    n--;
    return true;
}

template <class type>
bool List<type>::getFront(type *obj){
    if(!front){
        return false;
    }

    *obj = front->obj;
    return true;
}

template <class type>
bool List<type>::getBack(type *obj){
    if(!front){
        return false;
    }

    *obj = back->obj;
    return true;
}

template <class type>
bool List<type>::isEmpty(){
    return !front;
}

template <class type>
void List<type>::clear(){
    Node<type> *P;

    while(front){
        P = front;
        front = front->next;
        delete P;
    }

    n=0;
    front=back=nullptr;
}

template <class type>
int List<type>::getSize(){
    return n;
}

template class List<int>;
template class List<float>;
template class List<double>;
template class List<long>;
template class List<std::string>;
template class List<char>;
template class List<bool>;
