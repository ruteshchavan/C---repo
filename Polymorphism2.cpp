#include<iostream>
using namespace std;

class Parent { 
public :

virtual void print() {   // by using virtual keyword it will override the function
    cout<< "Parent Class"<<endl;
   }

void show() {
    cout<< "Parent Class"<<endl;    
   }
};

class Child : public Parent {
    public:
void print() {  
    cout<< "Child Class"<<endl;
   }

void show() {
    cout<< "Child Class"<<endl;    
   }

};

int main() {
    Parent *p;
    Child a;

    p=&a;
    p->print();
    p->show();
    
}
