// WAP to calculate sum of 'n' number's.

#include<iostream>
using namespace std;

int main() {
    int x;
    cout<<"Enter the number to be added :"<<endl;
    cin>>x;

    int sum=0;
    for(int no=1 ; no<=x ; no++){
        sum = sum + no;
    }

    cout<<sum<<endl;

    return 0;
}