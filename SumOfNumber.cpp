/*
# WAP to find sum of digits of a given number.
*/

#include<iostream>
using namespace std;

int main() {
    
    int n;
    cout<< "Enter the Number :" << endl;
    cin>>n;
    int sum=0;  // to store the number of digits

    while (n>0)
    {  
        int lastdigit=n%10;
        sum+=lastdigit;
        n/=10;
    }
    cout<<"Sum of digits : "<<sum;
}
