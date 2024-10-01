// WAP Implement simple calculator using switch.

#include<iostream>
using namespace std ;

int main(){
    float n1,n2;
    cout<<"Input two number's"<<endl;
    cin >> n1 >> n2;

    char op;
    cout<< "Enter the operator to perform calculation"<<endl;
    cin>>op;

    switch(op)
    {
    case '+': 
        cout<<n1+n2<<endl;
        break;
    
    case '-': 
        cout<<n1-n2<<endl;
        break;
    
    case '*': 
        cout<<n1*n2<<endl;
        break;
    
    case '/': 
        cout<<n1/n2<<endl;
        break;
    
    default:
        cout <<"can't perform operation"<< endl;
        break;
    }

}
