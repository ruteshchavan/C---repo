/* WAP to find last occurence(position) of an element x in a given array.
example : array - 1 2 3 3 4 1
    input - 1                  |    input - 3
    output - index no 5        |    output - index no 3  
as from given array input is given 1 hence it will print last occurence of the element index position.
array contains element 1 twice we need to print last index position for element 1.
*/
#include<iostream>
#include<vector>     
using namespace std;

int main() {
    vector<int> v(6);   // created a vector of size 6

    for(int i=0;i<6;i++){
        cin>>v[i];
    }

    int x;
    cout<<"Enter x : "<<endl;
    cin>>x;

    int occurence=-1;

    for(int i=0;i<v.size();i++) {
        if(v[i]==x) {
            occurence=i;
        }

    }
    cout<<occurence<<endl;
}