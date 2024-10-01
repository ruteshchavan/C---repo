// References - A reference is a variable that is referred as another name 
//              for an already existing variable.
// Reference can be created by using an ampersand (&) operator.
/* C++ provides two types of references:
    1.References to non-const values
    2.References as aliases     
*/
// A reference is a variable which is another name of the existing variable.
// while the pointer is variable that stores the address of another variable.

#include <iostream>  
using namespace std;  
int main()  
{  
int a=70; 
int &b=a;  
int &c=a;  
cout << "Value of a is :" <<a<<endl;  
cout << "Value of b is :" <<b<<endl;  
cout << "Value of c is :" <<c<<endl;  
return 0;
} 
