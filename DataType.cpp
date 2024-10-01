// WAP to print the size of datatypes.
// using sizeof opeartor to identify the size.
// signed , unsigned , long , short are type modifiers.

#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Size of int" <<sizeof(a) <<endl;

    float b;
    cout << "Size of float" <<sizeof(b) <<endl;

    char c;
    cout << "Size of char" <<sizeof(c) <<endl;

    bool d;
    cout << "Size of bool" <<sizeof(d) <<endl;

return 0;
}
