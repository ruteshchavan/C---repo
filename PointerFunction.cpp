// The function pointer is a pointer used to point functions. 
// It is basically used to store the address of a function.

#include <iostream>  
using namespace std;  

int add(int a , int b)  
{  
    return a+b;  
}

int main()  
    {  
 int (*ptr) (int,int);  // function pointer declaration  
 ptr=add; // ptr is pointing to the add function  
 int sum=ptr(5,5);  // using pointer we are calling function
 cout << "value of sum is :" <<sum<<endl;  
  return 0;  
    }  