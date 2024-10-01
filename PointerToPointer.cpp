// Poniter to Pointer means pointing to another pointer variable.
#include<iostream> 
using namespace std;

int main(){
    int a=10;
    int *p;
    p=&a;
    cout<<*p<<endl;
    cout<<p<<endl;

    int **q=&p;  // pointer to pointer variable
    cout<<*q<<endl;
    cout<<**q<<endl;
}