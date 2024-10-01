// Constructor is a special method which is called automatically when an object is created.
// The constructor has the same name as the class it belongs to.

// There can be two types of constructors :
// Default constructor
// Parameterized constructor

// A constructor which has no argument is known as default constructor.

#include <iostream>  
using namespace std;  
class Employee  
 {  
   public:  
        Employee()    
        {    
            cout<<"Default Constructor Invoked"<<endl;    
        }    
};  
int main()   
{  
    Employee e1;  
    Employee e2;   
    return 0;  
}  