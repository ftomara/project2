#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>
#include <locale>
#include <cstring>
#include "sublinkedlist2.h"
#include "productstack.h"
#include "stack.h"
using namespace std;
#ifndef factory_H
#define factory_H
class factory
{
private:
    sublinkedlist2<product> fact;

public:
    void AddNewProduct(product &s); // new product to the  queue
    product *DeleteProduct();
    void Display();
    // void AddNewProLine();// add new queue(productline) to the factory
    // void AddNewTask(size_t QuNum , size_t StNum , string val); // new element to the product
    // void DeleteProLine(size_t QuNum);
    // product<string>*SearchPro(string val);// search for queue by product name
};
void factory::AddNewProduct(product &s)
{
    fact.push_back(s);
    cout << "Added New Product:\n"
         << s << endl;
}
product *factory::DeleteProduct()
{
    return fact.pop_front();
}
void factory::Display()
{
    fact.display();
}
// void factory::AddNewProLine()
// {
//     fact.push_back();

// }
// void factory::AddNewTask(size_t QuNum , size_t StNum , string val)
// {
//     fact[QuNum][StNum].push_back(val);
// }
#endif