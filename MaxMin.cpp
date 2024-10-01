// WAP to print maximum and minimun value's.
/*
  INT_MAX is a macro that specifies that an integer variable cannot store any 
  value beyond this limit.
  INT_MIN is a macro that specifies that an integer variable cannot store any 
  value below this limit.
*/

// #include<iostream>
// #include<climits>

#include "bits/stdc++.h"
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxNo=INT_MIN; 
    int minNo=INT_MAX; 

    for(int i=0;i<n;i++){
      maxNo=max(maxNo,arr[i]);
      minNo=min(minNo,arr[i]);
    }
    cout<<minNo<<" "<<maxNo<<endl;
}
