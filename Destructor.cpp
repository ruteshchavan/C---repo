// A destructor works opposite to constructor.
// It destroy's the objects of classes.
// A destructor is defined like constructor.But it is prefixed with a tilde sign (~).

#include <iostream>  
using namespace std;  

class Employee  
 {  
   public:  
        Employee()    
        {    
            cout<<"Constructor Invoked"<<endl;    
        }    
        ~Employee()    
        {    
            cout<<"Destructor Invoked"<<endl;    
        }  
};  

int main(void)   
{  
    Employee e1; 
    Employee e2; 
    return 0;  
}  