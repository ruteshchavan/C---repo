/*
   If we create two or more members having the same name but different in 
   number or type of parameter, it is known as C++ overloading.

   Types of overloading in C++ :
   1.Function overloading -
   Function Overloading is defined as the process of having two or more function 
   with the same name, but different in parameters is known as function overloading.

   Advantage of FO is it increases the readability of the program 
   because you don't need to use different names for the same action.

   2.Operators Overloading -
   Operator overloading is a compile-time polymorphism in which the operator is 
   overloaded to provide the special meaning to the user-defined data type.

   Operator that cannot be overloaded :
    Scope operator (::)
    Sizeof
    member selector(.)
    member pointer selector(*)
    ternary operator(?:)
*/

#include<iostream>
using namespace std;

class cal {
    public :

    int add(int x,int y) {
        return x + y;
    }

    int add(int x,int y,int z) {
        return x + y + z;
    }
};
int main() {
    cal a;
    cout<<a.add(10,20)<<endl;
    cout<<a.add(10,20,22)<<endl;
    return 0;
}
