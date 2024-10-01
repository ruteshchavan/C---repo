// WAP to print sum of first n natural number's.

#include<iostream>
using namespace std ;

int Sum(int n) {
    int total=0;
    for(int i=0;i<=n;i++){
        total+=i;
    }
     return total;
}
int main() {
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    cout<< Sum(n) <<endl;
}