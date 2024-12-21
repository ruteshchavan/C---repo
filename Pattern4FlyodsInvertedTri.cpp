/*
# for flyods inverted triangle we need to decrement the value and initilaize to row number.

* * * * *
* * * *
* * *
* *
*

*/


#include<iostream>
using namespace std;

int main() {
    
    int n;
    cout<< "Enter no. of row's" << endl;
    cin>>n;

    for (int i=n;i>=1;i--) // i is initialize to n and decrement is performed.
    {
        for(int j=1;j<=i;j++){   // condition initialization
            cout<<"*"<<" ";       
        }
        cout<<endl;
    }
    
}