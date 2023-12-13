#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <cassert>
#include <cmath>
using namespace std;
#ifndef stack_H
#define stack_H

template <class T>
struct stack
{

    friend ostream &operator<<(ostream &out, const stack<T> &s)
    {
        if (s.top != -1)
        {
            // out << &Narr << endl;
            out << "| ";
            for (int i = s.top; i > -1; i--)
                out << s.Narr[i] << " ";
            out << "|\n";
        }

        return out;
    }
    int top;
    T Narr[6];
    size_t size;
    size_t capacity;
    stack();
    bool isempty();
    bool isfull();
    // void resize();
    void push_back(T value);
    void pop_back();
    void display();
    size_t default_capacity();
    T &operator[](const size_t pos);
    int getsize();
    int getcapacity();
    // ~stack();
};

template <class T>
stack<T>::stack()
{
    top = -1;
    size = 0;
    capacity = default_capacity();
    // Narr = new T[capacity];
}

template <class T>
bool stack<T>::isempty()
{
    return (top == -1);
}

template <class T>
bool stack<T>::isfull()
{
    return (top == capacity - 1);
}

// template <class T>
// void stack<T>::resize()
// {
//     size_t newcapacity = max(size * 2, (size_t)2);
//     T *newarr = new T[newcapacity];
//     copy(Narr + 0, Narr + top, newarr + 0);
//     delete[] Narr;
//     Narr = newarr;
//     capacity = newcapacity;
//     newarr = NULL;
// }

template <class T>
void stack<T>::push_back(T value)
{
    // if (isfull())
    //     resize();
    Narr[++top] = value;
}

template <class T>
void stack<T>::pop_back()
{
    top--;
}

template <class T>
void stack<T>::display()
{
    if (top != -1)
    {
        cout << "| ";
        // cout << &Narr << endl;
        for (int i = top; i > -1; i--)
            cout << Narr[i] << " ";
        cout << "|" << endl;
    }
}

template <class T>
size_t stack<T>::default_capacity()
{
    return 10;
}

template <class T>
T &stack<T>::operator[](const size_t pos)
{
    if (pos >= size)
        throw out_of_range("position is out of range");
    return Narr[pos];
}

template <class T>
int stack<T>::getsize()
{
    return size;
}

template <class T>
int stack<T>::getcapacity()
{
    return capacity;
}

// template <class T>
// stack<T>::~stack()
// {
//     if (Narr != nullptr)
//     {
//         delete[] Narr;
//         Narr = nullptr;
//     }
// }

#endif
