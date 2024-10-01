#include<iostream>
using namespace std;

int main() {
    int no;
    cout<< "Enter number to check wether given no. is prime :"<<endl;
    cin>>no;
    int i;

    for(i=2;i<no;i++){
        if(no%i==0){
            cout<<"Non-Prime"<<endl;
            break;
        }
    }
    if(i==no) {
        cout<<"Prime"<<endl;
    }
    return 0;
}