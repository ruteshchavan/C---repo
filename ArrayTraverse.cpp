/*
# display the elements of array through (for each loop).
# for each loop traverse through each element of a array.

for each loop syntax :
for( datatype variable_name : array_name){
    cout....
}
*/

#include<iostream>
using namespace std;

int main () {

    int arr[]={10,20,30,40,50};  // array initialization and declearation.
      
    for(int x:arr){    //running a for each loop to print elements of array.
        cout<<x<<endl;
    }

}


