// A constructor which has parameters is called parameterized constructor.
// It is used to provide different values to distinct objects.
// One cannot inherit a constructor.
// constructors are typically declared in the class's public section.

#include <iostream>  
using namespace std;  
class Employee {  
   public:  
       int id;//data member (also instance variable)      
       string name;//data member(also instance variable)  
       float salary;  
       Employee(int i, string n, float s)    
        {    
            id = i;    
            name = n;    
            salary = s;  
        }    
       void display()    
        {    
            cout<<id<<"  "<<name<<"  "<<salary<<endl;    
        }    
};  
int main() {  
    Employee e1(101, "Sonoo", 89000); //creating an object of Employee   
    Employee e2(102, "Nakul", 59000);   
    e1.display();    
    e2.display();    
    return 0;  
}  