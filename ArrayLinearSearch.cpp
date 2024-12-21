/*
# linear search in array.
# search if a given element is present in array or not, if it is not present the return -1 else return 
  the index.
# Linear search is applicable to any linear data structure where elements are arranged sequentially.
*/

#include<iostream>
using namespace std;

int main() {
    int arr[]={10,55,7,8,99,65,35};
    int key;      // taking input from user
    int ans=-1;  // to return -1 if element is not found
    cout<<"Enter the element to be searched :"<<endl;
    cin>>key;

    for(int i=0;i<7;i++) {
        if(arr[i]==key) {
            ans=i;  // element is found at (i'th) index
            break;  // break is used if our element is at index 0, so there's no need to traverse the array.
        }
    }
    cout<<ans<<endl;
}