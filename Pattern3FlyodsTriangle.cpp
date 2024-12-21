/*
# for flyods triangle we need do just simply alter the column condition as row initialization.
*
* *
* * *
* * * *
* * * * *

*/


#include<iostream>
using namespace std;

int main() {
    
    int n;
    cout<< "Enter no. of row's" << endl;
    cin>>n;

    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++){   // condition initialization
            cout<<"*"<<" ";       
        }
        cout<<endl;
    }
    
}