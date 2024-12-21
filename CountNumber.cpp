/*
# WAP to count number of digits of a given number.
*/

#include<iostream>
using namespace std;

int main() {
    
    int n;
    cout<< "Enter the Number :" << endl;
    cin>>n;

    int digits=0;  // to store the number of digits

    while (n>0)
    {
        digits++;
        n=n/10;

    }
    cout<<"Total digits :"<<" "<<digits;
}