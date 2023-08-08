#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int y = 20;
    int *var; //declaring pointer variable

    var = &y; // stores address in pointer

    cout << "Value of variable x and y: ";
    cout << x << " " << y << endl;

   //print the address stored in var
    cout << "Address stored in var variable: ";
    cout << var << endl;

    //access the value at the address available in pointer
    cout << "Value of *var variable: ";
    cout << *var << endl;


    return 0;
}
