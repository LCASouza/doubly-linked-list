#pragma once
#include <iostream>
#include "node.h"

template <class type>
class List{
    private:
        Node<type> *front, *back;
        int n;
    
    public:
        List();
        ~List();

        bool pushFront(type *obj);
        bool pushBack(type *obj);
        bool popFront(type *obj);
        bool getFront(type *obj);
        bool getBack(type *obj);
        bool isEmpty();

        void clear();

        int getSize();
};
