// WAp to print prime number's between given range.
// we need to use nested for loop.
// 1st (outer) loop will check no. from a to b.
// 2nd (inner) loop will check no. is prime/not.

  
#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout<<" Enter range for prime number's "<<endl;
    cin>>a>>b;
    int i;

    for(int num=a; num<=b; num++) {
       
        for(i=2; i<num; i++) {
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<<num<<endl;
        }
    }
}