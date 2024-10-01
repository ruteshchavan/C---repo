// WAP to check no. is divisible by 2 or 3.
// Logical operator's are used to connect multiple conditions/ expression's.

#include<iostream>
using namespace std ;

int main() {
    int n;
    cout<<" Enter the number :"<<endl;
    cin>>n;

    if(n%2==0 && n%3==0) {
        cout<<" Divisible by 2 & 3"<<endl;
    }

    else if(n%2==0) {
        cout<<" Divisible by 2"<<endl;
    }

    else if(n%3==0) {
        cout<<" Divisible by 3"<<endl;
    }

    else {
        cout<<" Divisible by none"<<endl;
    }


}