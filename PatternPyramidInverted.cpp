//WAP to print Inverted Half Pyramind

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter no. of rows for triangle"<<endl;
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}