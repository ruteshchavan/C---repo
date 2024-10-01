// WAP to print Flyod's Triangle.
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<sum<<"  ";
            sum++;
        }
        cout<<endl;
    }
}