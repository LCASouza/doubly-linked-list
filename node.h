#pragma once

template <class type>
class Node{
    public:
        type obj;//Dado que será armazenado dentro do Node
        Node<type> *next=nullptr, *prev=nullptr;//Ponteiro para o próximo node

        static Node<type>* montaNode(type *obj);
        static void desmontaNode(Node<type> *x, type *obj);
};