// WAP to print prime number's using function.

#include<iostream>
#include<math.h>
using namespace std;

bool Prime(int num) {
    for(int i=2; i<=sqrt(num); i++) {
            if(num%i==0){
                return false;
            }
        }
        return true;
}

int main() {
    int a,b;
    cout<<" Enter range for prime number's "<<endl;
    cin>>a>>b;

    for(int i=a; i<=b; i++) {
        if(Prime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}