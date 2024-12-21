/*
# calculate the sum of all the elements of an array.
*/


#include<iostream>
using namespace std;

int main () {

int sum=0;
int arr[]={6,4,8};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<"Size of Array : "<<size<<endl;

for(int i=0;i<size;i++) {
    
    sum+=arr[i];
    }

    cout<<sum<<endl;
}
