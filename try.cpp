#include <iostream>
using namespace std;
// #include "queue.hpp" 
#include "stack.h"
#include "productstack.h"
#include "factorystack.h"
#include "sublinkedlist2.h"
int main()
{
    factory f;
    sublinkedlist2<product> l;
    product p ;
    // cin>>p;
    p.push_back("aaa");
    p.push_back("bbb");
    p.push_back("ccc");
    p.push_back("ddd");
    // p.display();
    // cout<<p;
    // f.AddNewProduct(p);
    // f.Display();
    l.push_back(p);
    l.display();
    // sublinkedlist2<stack<int> > l; // sublinkedlist2<stack<int>* > l; and 
    // // push this into stack<int> *s print addreses and bus error ;
    // // l.push_back();
    // stack<int> s;
    // s.push_back(1);
    // s.push_back(2);
    // s.push_back(3);
    //  stack<int> s1,s2,s3,s4;
    // s1.push_back(11);
    // s1.push_back(12);
    // s1.push_back(13);
    // s2.push_back(21);
    // s2.push_back(22);
    // s2.push_back(23);
    // s3.push_back(31);
    // s3.push_back(32);
    // s3.push_back(33);
    // s4.push_back(41);
    // s4.push_back(42);
    // s4.push_back(43);
    // l.push_back(s1);
    // //  l.dispaly();
    // // l.push_back(s1);
    // l.push_back(s1);
    // l.push_back(s2);
    // l.push_back(s3);
    // l.push_back(s4);
    // l.push_back(s1);
    // l.push_back(s1);
    // l.push_back(s1);
    // l.push_back(s1);
    // // s1.display();
    // // // cout<<"list s1: \n";
    // // // l[0][1].display();
    // // s2.display();
    // // // // cout<<"list s2: \n";
    // // // // l[0][1].display();
    // // s3.display();
    // // // cout<<"list s3: \n";
    // // // l[0][3].display();
    // // s4.display();
    // // cout<<"list s4: \n";
    // // l[0][4].display();

    
    // // l[0][1].push_back(111);

    // // // cout<<&s1 << " "<<&l[0][0]<<endl;
    // l[0][0].push_back(444);
    // l[0][1].push_back(111);
    // l[0][2].push_back(222);
    // l.pop_front();
    // l.pop_front();
    // // l.pop_front();
    // // l.pop_front();
    // // l.pop_front();
    // // l.pop_front();
    // // l.pop_front();


    // // s1.push_back(444);
    // // s1.push_back(111);
    // // s2.push_back(444);
    // // s1.display();
    // // s2.display();
    // // l.push_back(s1);
    //  l.display();

    // l.push_back(s3);
    //  l.dispaly();
    // s.display();
    // l.push_back(s);
    // l.push_back(s);
    // l.push_back(s);
    // l.push_back(s);
    // l.push_back(s);
    // l.push_back(s);
    // l.push_back(s);
    // l[0][3].push_back(60);
    // l[0][0].push_back(61); //print weird zeros and garbage values and modify both stacks not the first one only
//     cout<<"first node : \n";
//     l.dispaly();
//     cout<<"second change:\n";
//     cout<<"================================================== :\n";
//     l[0][0].push_back(4);
//     l.dispaly();
// stack<int> s1;
//     s1.push_back(11);
//     s1.push_back(22);
//     s1.push_back(33);
//     l.push_back(s1);
//     // l[0][1].push_back(44);
//     l.push_back(s1);
//     l.push_back(s1);
//     l.push_back(s1);
//     l.push_back(s1);
//     l.push_back(s1);
//     l.push_back();// when commented gives infinty loop
//     l.push_back(s);
//     cout<<"passed \n";
//     l.dispaly();
//     l[0][0].push_back(44); 
//     l[1][0].pop_back();
//     cout<<"pop check : \n";
//     l.dispaly();
//     cout<<"================================================== :\n";
//     cout<<"poped : "<<*(l.pop_front())<<endl;
//     cout<<"================================================== :\n";
//     l.dispaly();


   
   return 0;
}