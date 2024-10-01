// WAP to greet in differnt languages.
// Switch is a replacement/substitute for long if-else statements.
// Variable is cpmpared against the multiple values/cases in order to execute.

#include<iostream>
using namespace std;
int main() {
    
    char button;
    cout<<" a-Marathi\n b-English\n c-Japanese "<<endl;
    cout<< " Enter the button to greet "<<endl;
    cin>>button;

    switch(button)
    {
    case 'a':
        cout<<"Namaskar"<<endl;
        break;

    case 'b':
        cout<<"Hello"<<endl;
        break;    
    
    case 'c':
        cout<<"Kon'nichiwa"<<endl;
        break;

    default:
        cout<<"Can't Greet"<<endl;
        break;
    }
}