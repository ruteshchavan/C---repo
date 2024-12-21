/*
# Find the maximum value in array.
*/

#include<iostream>
using namespace std;

int main () {

cout<<"Enter the size of array :"<<endl;
int n;
cin>>n;
cout<<"Enter the array elements :"<<endl;
int i;
int arr[n];


for(i=0;i<n;i++) {   // receiving array elements from user
    cin>>arr[i];
    }

int max=arr[i];    // variable created to compare array elements.

for(i=0;i<n;i++) {     // running loop to compare array elements.
    if(arr[i]>max){
        max=arr[i];
        }
    }
cout<<max<<endl;
}

