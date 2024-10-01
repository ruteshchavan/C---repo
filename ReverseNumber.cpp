// WAp to reverse the given number.
#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the Number : "<<endl;
    cin>>n;
    int sum=0;
    // int lastdigit;

    while(n>0) {
        int lastdigit=n%10;
        sum=sum*10 + lastdigit;
        n=n/10;
    }
    cout<<sum<<endl;
}