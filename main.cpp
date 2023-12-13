#include <iostream>
#include <string>
using namespace std;
// #include "queue.hpp"
#include "stack.h"
#include "factorystack.h"
#include "productstack.h"
int main()
{
    int choice;
    factory f;
    do
    {
        cout << "\t\t\033[1;38;2;120;70;150mWelcome to My Missed Up Factory :,(!" << endl;
        cout << "Please select from the following options:" << endl;
        cout << "1. Display All Products" << endl;
        cout << "2. Add Product" << endl;
        cout << "3. Remove Front Product" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            f.Display();
            break;
        case 2:
        {
            int n, m;
            cout << "How Many Products Do You Want To Add ? \n";
            cin >> n;
            // cin.ignore();
            for (int i = 0; i < n; i++)
            {
                product p1;
                cout << "Enter Product no." << i + 1 << " info : \n";
                cin >> p1;
                do
                {
                    cout << "How Many Tasks Do You Want To Add For Each Product [0:6] ?\n";
                    cin >> m;
                } while (m > 6);
                for (int j = 0; j < m; j++)
                {
                    string s;
                    cout << "Enter Task no. :" << j + 1 << "\n";
                    cin >> s;
                    p1.push_back(s);
                }
                f.AddNewProduct(p1);
            }
            cout << "Successfully Added !\n";
            break;
        }
        break;
        case 3:
            f.DeleteProduct();
            break;
        case 4:
            cout << "Exitting......\n";
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}