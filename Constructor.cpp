#include<iostream>
using namespace std;

class Rectangle {
    public :      
   int l=0;    
   int b=0;    

   Rectangle() {   // default constructor - no args passed 
    l=0;
    b=0;
   }

    Rectangle(int x , int y) {   // parameterized constructor - args passed 
    l=x;
    b=y;
   }

   Rectangle(Rectangle &x) {   // copy constructor - when you want to initialise an obj by another existing obj.
    l=x.l;
    b=x.b;
   }
};

int main() {
    Rectangle r1;
    cout<<r1.l<<"-"<<r1.b<<endl;

    Rectangle r2(4,5);
    cout<<r2.l<<"-"<<r2.b<<endl;

    Rectangle r3=r2;
    cout<<r3.l<<"-"<<r3.b<<endl;
    
}