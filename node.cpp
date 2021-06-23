#include <iostream>
#include "node.h"
#include <utility>

template <class type>
Node<type> * Node<type>::montaNode(type *obj)
{
    Node<type> *novo = new Node<type>;

    if(novo)
    {
        novo->next=0;
        novo->obj=*obj;
    }
    return novo;
}

template <class type>
void Node<type>::desmontaNode(Node<type> *x, type *obj)
{
    if(x)
    {
        *obj=x->obj;
        delete x;
    }
}

template class Node<int>;
template class Node<float>;
template class Node<double>;
template class Node<long>;
template class Node<std::string>;
template class Node<char>;
template class Node<bool>;