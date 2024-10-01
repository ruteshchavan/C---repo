// WAP for 3-digit armstrong number.
#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int n;
    cout<<"Enter the Number : "<<endl;
    cin>>n;

    int sum=0;
    int number=n;

    while(n>0) {
        int lastdigit=n%10;
        sum = sum + round(pow(lastdigit,3));
        n=n/10;
    // round() function is used to round value.
    
    }

    if(sum==number){
        cout<<" Armstrong Number "<<endl;
    }
    else {
        cout<<" Not Armstrong Number "<<endl;   
    }
}