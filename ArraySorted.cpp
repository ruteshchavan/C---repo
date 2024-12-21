/* WAP to check wether given array is sorted or not.
*/

#include<iostream>
using namespace std;

int main () {

// for array 1 :  
    int arr1[]={10,20,30,40,50};  
    bool flag1=true; 
    for(int i=1;i<6;i++){    
        if(arr1[i]<=arr1[i-1]) {
            flag1=false;
        }
    }
    cout<<"array1 : "<<flag1<<endl;

    cout<<endl;

// for array 2 :  
    int arr2[]={10,20,60,40,50};
    bool flag2=true; 
     for(int i=1;i<6;i++){    
        if(arr2[i]<=arr2[i-1]) {
            flag2=false;
        }
    }
    cout<<"array2 : "<<flag2<<endl;

}