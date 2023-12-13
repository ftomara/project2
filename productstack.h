#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>
#include <locale>
#include <cstring>
#include "stack.h"
using namespace std;
#ifndef product_H
#define product_H
class product : public stack<string>
{

private:
    string proName;
    // string price;
    string SN;

public:
    friend ostream &operator<<(ostream &out, product &p1)
    {
        const int fieldWidth = 23;

        out << "Product Name: " << setw(fieldWidth) << left << p1.proName << "|";
        out << "Seriel Number: " << setw(fieldWidth) << left << p1.SN << "|";
        p1.display();
        // cout<<p1;
        // stack<T>::display();
        // out << static_cast<stack<string> >(p1);
        return out;
    }
    friend istream &operator>>(istream &in, product &p)
    {
        cout << "Enter product Name: ";
        in >> p.proName;
        // cin.ignore();
        // getline(in, p.proName);
        cout << "Enter product Seriel Number: ";
        in >> p.SN;
        // cin.ignore();
        // getline(in, p.SN);
        return in;
    }
    product() : stack<string>() {}
    // void push_back(T val);
    // void pop_front();
    // void display();
    product &operator=(const product &other);
    bool operator==(const string &key) const;
    bool operator!=(const product &other) const;
    bool operator<=(const product &other) const;
};
// template <typename T>
// void product<T>::display()
// {
//     const int fieldWidth = 23;

//         cout << "Product Name: " << setw(fieldWidth) << left << proName << "|";
//         cout << "Seriel Number: " << setw(fieldWidth) << left << SN << "|";
//         stack<T>::display();
// }
product &product::operator=(const product &other)
{
    this->proName = other.proName;
    // this->price = other.price;
    this->SN = other.SN;
    return *this;
}
bool product::operator==(const string &key) const
{
    return (proName == key || SN == key);
}
bool product::operator!=(const product &other) const
{
    return (SN != other.SN);
}
bool product::operator<=(const product &other) const
{
    return (proName <= other.proName);
}
// template <typename T>
// void product<T>::push_back(T info)
// {
//     this->push_back(info);
// }
// template <typename T>
// void product<T>::pop_front()
// {
//     this->pop_front();
// }
// template <typename T>
// ostream &operator<<(ostream &out, product<T> &p1)
// {
//     const int fieldWidth = 23;

//     out << "Product Name: " << setw(fieldWidth) << left << p1.proName << "|";
//     out << "Seriel Number: " << setw(fieldWidth) << left << p1.SN << "|";
//     p1.display();
//     return out;
// }
// template <typename T>
// std::istream &operator>>(std::istream &in, product<T> &p)
// {

//     getline(in, p.proName, ',');
//     getline(in, p.SN, ',');
//     // getline(in, p.price, ',');

//     return in;
// }

#endif

// getline(in, p.factoryname, ',');
// std::string temp;
// if (getline(in, temp, ','))
//     p.status = (temp == "1");
// out << "Price: " << setw(fieldWidth) << left << p1.price << "|";
// out << "Type: " << setw(fieldWidth) << left << p1.factoryname << "|";

// if (out)
// {
//     std::ios_base::fmtflags flags = out.flags();
//     out << std::boolalpha;

//     if (p1.status == "1")
//         out << "Available Status: " << setw(fieldWidth) << left << "\033[1;32mAV\033[1;38;2;120;70;150m | ";
//     else
//         out << "Available Status: " << setw(fieldWidth) << left << "\033[1;31mBorrowed\033[1;38;2;120;70;150m |";

//     out.flags(flags);
// }