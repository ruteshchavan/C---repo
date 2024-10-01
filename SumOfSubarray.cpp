// Given an array a[] of size n.Output sum of each subarray of the given array.

// Subarray -contiguous part of an array.
// Subarray -cutting the chunk of orignal array and that becomes the subarray.
// To calculate sub-array- n*(n+1)/2
// eg- int a[]={1,2,3,4}
//    subarray- {2,3},{4},{1,2,3},{3,4}.
//    not subarray-{2,1},{1,3,4},{4,1,3}

// subsequence-may not be contiguous but maintain the relative order.
// subset-elements should be part of the orignal array and may not be contiguous/order.

#include "bits/stdc++.h" // this header file includes all the standard libraries.
using namespace std ;

int main() {
    
    int n;
    cin >> n;

    int arr[n];
    // for loop to receive elements from the user.
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<" Print sum of sub-array " << endl;   
    for(int i=0;i<n;i++) {
        int sum=0;

        for(int j=i;j<n;j++) {
            sum+=arr[j];
            cout<<sum<<endl;
        }
    }

    cout<<"\n";

    cout<<" Print all sub-array " << endl;  
    for(int i=0;i<n;i++) {  
        for(int j=i;j<n;j++) {
            cout<<arr[j]<<endl;
        }
    }

     return 0;
}