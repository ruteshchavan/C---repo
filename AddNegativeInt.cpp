// add 2 neagtive or positive integers without using + operator.
#include<iostream>
using namespace std;

int main() {
    
    int x,y;
    cout<< "Enter 2 Integers "<<endl;
    cin>> x >> y;

    if(y>0) {
        while(y!=0){
            x++;
            y--;
        }
    }
    else if(y<0) {
        while(y!=0){
            x--;
            y++;
        }
    }
    cout<< "Sum of x + y ="<<" "<<x << endl;
}