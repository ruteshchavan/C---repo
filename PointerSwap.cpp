// Pointer Program to swap two numbers without using the 3rd variable.

#include<iostream> 
using namespace std;

int main(){  
int a=10,b=20,*p1=&a,*p2=&b;  
  
cout<<"Before swap "<<"a:"<<*p1<<" "<<"b:"<<*p2<<endl; 
*p1=*p1+*p2;  
*p2=*p1-*p2;  
*p1=*p1-*p2;  
cout<<"After swap "<<"a:"<<*p1<<" "<<"b:"<<*p2<<endl; 

return 0;  
}  