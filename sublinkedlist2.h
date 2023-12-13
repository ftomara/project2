#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <cassert>
#include <cmath>
using namespace std;

#include "queuenode.h"

#ifndef sublinkedlist2_H
#define sublinkedlist2_H

template <typename T>
struct sublinkedlist2
{
    queuenode<T> *head;
    queuenode<T> *tail;
    size_t size;
    sublinkedlist2();
    bool isempty();
    void push_back();
    void push_back(T newitem);
    T *pop_front();
    void pop_node();
    void removeByPos(size_t pos);
    void display();
    int count();
    void reverse();
    void swapp(queuenode<T> *&head, queuenode<T> *left, queuenode<T> *right);
    queuenode<T> &operator[](const size_t pos);
    ~sublinkedlist2();
    // void push_front();
    // void push_front(T newitem);
    // queuenode<T> *searchByPos(size_t pos);
    // void removeByPos(size_t posnode , size_t posstack);
};

template <typename T>
sublinkedlist2<T>::sublinkedlist2()
{
    head = NULL;
    tail = NULL;
    size = 0;
    push_back();
}
template <typename T>
bool sublinkedlist2<T>::isempty()
{
    return ((head == NULL) ? true : false);
}
template <typename T>
void sublinkedlist2<T>::push_back()
{
    queuenode<T> *newnode = new queuenode<T>();
    if (isempty())
    {
        head = newnode;
        // tail = newnode;
    }
    else
    {
        tail->next = newnode;
    }
    tail = newnode;
    size++;
}
template <typename T>
void sublinkedlist2<T>::push_back(T newitem)
{
    if (isempty() || tail->getsize() == tail->default_capacity()) //(tail->isfull()) useing  this conditon instead causes infinty loop
        push_back();
    tail->push_back(newitem);
}
template <typename T>
void sublinkedlist2<T>::pop_node()
{
    queuenode<T> *rm = head;
    head = head->next;
    size--;
    delete rm;
}
template <typename T>
T *sublinkedlist2<T>::pop_front()
{
    // T* rmE = new T();
    if (head->isempty()) // doesnt work the way it should
        pop_node();
    T *rmE = head->pop_front();
    if (head->isempty()) // doesnt work the way it should
        pop_node();
    return rmE;
}
template <typename T>
void sublinkedlist2<T>::display()
{
    queuenode<T> *temp = head;
    if (temp == NULL || temp->isempty())
    {
        cout << "List Is Empty ..!\n";
        return;
    }
    // cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
    // size_t counter = 0;
    while (temp != NULL)
    {
        // cout << "node no. " << counter << endl;
        temp->display();
        cout << "\n---------------\n"; //--------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
        temp = temp->next;
        // counter++;
    }
    // {
    // for(int i =0 ; i<size ; i++)
    // }
}
template <typename T>
int sublinkedlist2<T>::count()
{
    queuenode<T> *temp = head;
    int counter = 0;
    while (temp != NULL)
    {
        counter++;
        temp = temp->next;
    }
    return counter;
}
template <typename T>
void sublinkedlist2<T>::removeByPos(size_t pos)
{
    if (isempty())
    {
        cout << "Your List Is Empty ,Nothing to Delete\n";
        return;
    }
    // queuenode<T>* rm = nullptr;
    queuenode<T> *temp = head;
    queuenode<T> *prev = nullptr;
    bool found = false;
    size_t counter = 1;
    if (pos == 1)
    {
        head = head->next;
        delete temp;
        return;
    }
    else
    {
        while (temp != nullptr)
        {
            if (counter == pos)
            {
                if (prev == nullptr)
                {
                    head = temp->next;
                }
                else
                {
                    prev->next = temp->next;
                }
                // rm = temp;
                delete temp;
                found = true;
                break;
            }
            counter++;
            prev = temp;
            temp = temp->next;
        }

        if (!found)
        {
            cout << "Not Found.\n";
        }
    }
    // return rm;
}
template <typename T>
void sublinkedlist2<T>::reverse()
{
    queuenode<T> *prev = NULL;
    queuenode<T> *curr = head;
    queuenode<T> *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}
template <typename T>
void sublinkedlist2<T>::swapp(queuenode<T> *&head, queuenode<T> *left, queuenode<T> *right)
{
    if (left == right || left == nullptr || right == nullptr)
        return;
    queuenode<T> *prevleft = head;
    queuenode<T> *prevright = head;
    while (prevleft->next != left)
        prevleft = prevleft->next;

    while (prevright->next != right)
        prevright = prevright->next;

    if (!prevleft || !prevright)
    {
        if (prevleft == nullptr)
        {
            head = right;
        }
        else
        {
            head = left;
        }
    }
    else
    {
        prevleft->next = right;
        prevright->next = left;
    }
    queuenode<T> *temp = left->next;
    left->next = right->next;
    right->next = temp;
}
template <typename T>
queuenode<T> &sublinkedlist2<T>::operator[](const size_t pos)
{
    if (pos >= count() || pos < 0)
        throw out_of_range("postion is out of range");
    queuenode<T> *temp = head;
    size_t counter = 0;
    while (counter != pos)
    {
        temp = temp->next;
        counter++;
    }
    return (*temp);
}
template <typename T>
sublinkedlist2<T>::~sublinkedlist2()
{
    while (head != nullptr)
    {
        queuenode<T> *temp = head;
        head = head->next;
        delete temp;
    }
}

#endif
