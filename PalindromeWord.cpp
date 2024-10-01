#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check=1;

    for(int i=1;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            check=false;
            break;
        }
    }

    if(check=true)
        cout<<" Word is palindrome " << endl;
    else{
        cout<<"Word is not plaindrome"<< endl;
    }
    return 0;
}