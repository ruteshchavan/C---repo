#include<iostream>
using namespace std;

class A {
    int x;

    public :
    A(int n) {
        x= n;
    } 

    friend void fun(A &obj);
};

void fun(A &obj){     //passing object of class A
        cout<<obj.x<<endl;
    }

int main() {
    A obj(5);
    fun(obj);
    
}
