#ifndef GENERIC_NODE_HPP
#define GENERIC_NODE_HPP

template<typename T>
class Stack;
template<typename T>
class Queue;

template <typename T>
class Node
{
    friend class Stack<T>;
    friend class Queue<T>;
public:
private:
    Node() = default;
    T m_item;
    Node *m_next;
};


#endif