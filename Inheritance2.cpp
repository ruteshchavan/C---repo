// Multi - level inheritance

#include<iostream>
using namespace std;

class Parent { 
public :
Parent() {
    cout<< "Parent Class"<<endl;
   }
};

class Child : public Parent {
public:
Child() {
    cout<< "Child Class"<<endl;
   } 
};

class GrandChild : public Child {
public:
GrandChild() {
    cout<< "GrandChild Class"<<endl;
   }
};

int main() {
GrandChild a;

}
