/* class syntax
class class_name {
    data fields
    methods
    constructors
};
*/


#include<iostream>
using namespace std;

class Fruit {
    public :     // always specify access modifers public in order to access the properties of class, bu default its always private 
   string name;     
   string colour;    
};

int main() {
    Fruit apple;   // creating a object variable to access the properties of class.
    apple.name = "Apple"; // accessing the properties using dot operator.
    apple.colour="Red";
    cout<<apple.name<<" - "<<apple.colour<<endl; 

    Fruit *mango= new Fruit();   // creating new object using new keyword and a pointer variable which will act as a object pointer.
    mango->name= "Mango";   // accessing the properties using arrow operator.
    mango->colour= "Yellow"; 
    cout<<mango->name<<" - "<<mango->colour<<endl;
}
