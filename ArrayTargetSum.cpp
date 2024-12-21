/* # find total no. of pairs in the array whose sum is equal to the given value x and display the pairs.

*/

#include<iostream>
using namespace std;

int main () {

int arr[]={6,4,8,2,3,1,7,9,5};
int size=sizeof(arr)/sizeof(arr[0]);
int sum=10;
int count=0;
for(int i=0;i<size;i++) {
    for(int j=i+1;j<size;j++) {
        if(arr[i]+arr[j]==sum) {
            // count++;
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
 }
    // cout<<"Total pairs : "<<count<<endl;
}