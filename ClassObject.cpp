// Since C++ is an object-oriented language, program is designed using objects and classes in C++.
// object is an entity that has state and behavior. Here, state means data and behavior means functionality.
// Collection of objects is called class. It is a logical entity.
// class is a user-defined data type. Inside a class, we define variables, constants, functions etc.
// All the members of the class can be accessed through object.

/* 
   An instance variable is a variable which is declared in a class but 
   outside of constructors, methods, or blocks.
*/


#include <iostream>  
using namespace std;  

class Student {   // class created
   public:  
       int id;   // fields or data member's
       string name;  // fields or data member's  

       void insert(int i, string n)    
        {    
            id = i;    
            name = n;    
        }    
       void display()    
        {    
            cout<<id<<"  "<<name<<endl;    
        }    
};

int main() {  
    Student s1;  //creating an object of Student   
    Student s2;  //creating an object of Student  
    s1.insert(201, "ray");    
    s2.insert(202, "rik");    
    s1.display();    
    s2.display();  
    return 0;  
}


