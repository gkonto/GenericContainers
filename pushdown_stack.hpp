#ifndef PUSHDOWN_STACK_HPP
#define PUSHDOWN_STACK_HPP

template<typename T>
class Stack;


template <typename T>
class Node
{
    friend class Stack<T>;
public:
private:
    Node() = default;
    T m_item;
    Node *m_next;
};


template <typename T>
class Stack
{
public:
    bool isEmpty() const { return m_first == nullptr; }
    int size() const { return m_n; }

    void push(T item)
    {
        Node<T> *oldfirst = m_first;
        m_first = new Node<T>();
        m_first->m_item = item;
        m_first->m_next = oldfirst;
        m_n++;
    };

    T pop()
    {
        Node<T> *oldfirst = m_first;
        T item = m_first->m_item;
        m_first = m_first->m_next;
        --m_n;
        delete oldfirst;
        return item;
    };

private:
    Node<T> *m_first = nullptr;
    int m_n = 0;
};


#endif