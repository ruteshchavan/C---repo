#include<iostream>
using namespace std;

class Parent {
  
public :
int x;

protected :
int y;

private :
int z;

};

class Child1 : public Parent {
    // x will be public 
    // y will be protected
    // z will be not accessible
};

class Child2 : private Parent {
    // x will be private  
    // y will be private
    // z will be not accessible
};

class Child3 : protected Parent {
    // x will be protected  
    // y will be protected
    // z will be not accessible
};


int main() {

}
