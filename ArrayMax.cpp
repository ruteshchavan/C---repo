// Given an array a[] of size n for every i from 0 to n-1 output max(a[0],a[1]...a[n]). 
// WAP to print max till 'i' i.e to compare and print only maximum array elements.

/* 
  We need to receive array size and it's elements from user.
  Using max() function we are comparing 0 and n-1 element and print maximum value.
  Iterate over array and update and output elements. 
  eg- array[3]={2 , 5 , 3}
      output - 2 ,5 ,5 
*/  

#include<iostream>
#include<climits>
using namespace std;

int main() {
    
    int var=INT_MIN;
    int n;
    cin >> n;

    int arr[n];

    // for loop to receive elements from the user.
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    // for loop to update and output the elemnts.
    for(int i=0;i<n;i++) {
        var=max(var,arr[i]);
        cout<<var<<endl;
    }
    return 0;
}

