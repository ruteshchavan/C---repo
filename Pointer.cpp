// Pointer is a variable that store's address of another variable.
// use & to assign address of variable to pointer variable.
// Address operator (&)	- Determine the address of a variable.
// Indirection operator (*) - Access the value of an address.
// A void pointer is a pointer that can hold the address of any data type.

#include "bits/stdc++.h"
using namespace std;

int main () {
    int a=10;  // integer variable created
    int *ptr;  // pointer variable created

    ptr=&a;  //assgin address of 'a' to 'ptr'
    cout<<ptr<<endl;   // prints address of variable a.
    
    ptr++;  // incrementing the value also changes the address of variable.
    cout<<ptr<<endl;
}