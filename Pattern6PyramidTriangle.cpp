/*
# for printing pyramid we need two seperate for loops
# one loop for printing spaces and one for printing pattern.
    
    *
   ***
  *****
 *******
*********

*/

#include<iostream>
using namespace std;

int main() {
    
    int n;
    cout<< "Enter no. of row's" << endl;
    cin>>n;

    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++){   // for loop for printing spaces
            cout<<" ";
        }

        for(int j=1;j<=(2*i-1);j++){   // for loop for printing stars
            cout<<"*";
        }
        cout<<endl;
    }
}
    