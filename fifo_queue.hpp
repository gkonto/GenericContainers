#ifndef FIFO_QUEUE_HPP
#define FIFO_QUEUE_HPP

#include "generic_node.hpp"

template<typename T>
class Queue
{
public:
    bool isEmpty() const { return first == nullptr; }
    int size() const { return n; }

    void enqueue(T item)
    {   // Add item to the end of the list.
        Node<T> *oldlast = last;
        last = new Node<T>();
        last->m_item = item;
        last->m_next = nullptr;
        if (isEmpty()) {
            first = last;
        } else {
            oldlast->m_next = last;
        }
        ++n;
    }

    T dequeue()
    {   // Remove item from the beginning of the list.
        Node<T> *oldfirst = first;

        T item = first->m_item;
        first = first->m_next;
        --n;
        if (isEmpty()) {
            last = nullptr;
        }

        delete oldfirst;
        return item;
    }

private:
    Node<T> *first = nullptr; // link to least recently added node
    Node<T> *last  = nullptr; // link to most recently added node
    int n = 0;                // number of items on the queue
};

#endif