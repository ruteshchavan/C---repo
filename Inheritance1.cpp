//single - levwl inheritance

#include<iostream>
using namespace std;

class Parent { 
public :
Parent() {
    int x=10;
    int y=20;
    cout<< "Parent Class"<<endl;
    cout<<x+y<<endl;
   }
};

class Child : public Parent {
    public:
Child() {
    cout<< "Child Class"<<endl;
   } 
};

int main() {
Child a;

}
