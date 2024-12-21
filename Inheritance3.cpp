// Multiple - level inheritance

#include<iostream>
using namespace std;

class Parent1 { 
public :
Parent1() {
    cout<< "Parent Class 1"<<endl;
   }
};

class Parent2 { 
public :
Parent2() {
    cout<< "Parent Class 2"<<endl;
   }
};

class Child : public Parent1 , public Parent2 {  // parent class 1 and 2 is being inherited by child class.
public:
Child() {
    cout<< "Child Class"<<endl;
   } 
};

int main() {
Child a;

}
