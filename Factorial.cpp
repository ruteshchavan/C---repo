/*
# WAP to calculate factorial of a number. 
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter factorial number :"<<endl;
    cin>>n;
    int factorial=1;

    for(int i=1;i<=n;i++) {
        factorial*=i;
    }
    cout<<"facorial of "<<n<<" is : "<<factorial<<endl;

}