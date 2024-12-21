/*
# WAP to reverse a number.
*/

#include<iostream>
using namespace std;

int main() {
    
    int n;
    cout<< "Enter the Number :" << endl;
    cin>>n;
    int reverse=0;  // to store the number of digits

    while (n>0)
    {  
        int lastdigit=n%10;
        reverse=reverse*10 + lastdigit;
        n/=10;
    }
       cout<<"Reverse number is :"<<" "<<reverse;
}
