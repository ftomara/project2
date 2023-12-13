#include <iostream>
#include"queue.h"
using namespace std;
#ifndef queuenode_H
#define queuenode_H
template <class T>
struct queuenode : public queue<T>
{
    friend ostream &operator<<(ostream &out, queuenode<T> &n);
    queuenode<T> *next;
    queuenode():queue<T>(),next(NULL){}//,capacity(4),size(0),arr(new T[capacity]){}

};

template <typename T>
ostream &operator<<(ostream &os, queuenode<T> &n)
{
    os << n.display();
    return os;
}
#endif
    // T*arr;
    // size_t currentSize;
    // size_t capacity;