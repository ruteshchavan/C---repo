// Array is a data structure used to store list of variable's of similar type.
// The multidimensional array is also known as rectangular arrays in C++.
// The data is stored in tabular form (row ∗ column) which is also known as matrix.
// Advantages of Array - Code Optimization , Random Access , Easy to sort data.


#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The array elements are ";
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}