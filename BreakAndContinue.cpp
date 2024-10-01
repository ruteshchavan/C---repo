// WAP to print number's that are not divisible by 'n'.

// Break and Continue are two statements used to control loops.
// Break is used to jump out of loop.
// Continue is used to continue loop while skiping the specified code.

#include<iostream>
using namespace std;

int main() {

    int input;
    cout<< "Enter the divisible no. :" << endl;
    cin>>input;

    for(int no=1;no<=100;no++) {
        if(no%input==0){
            continue;
        }
        cout<<no<<endl;
    }
}