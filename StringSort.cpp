// WAP to print out the sequenced string.

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
    string str="jsfgjdsbfdff";
    //cin>>str;

    sort(str.begin() , str.end()); // begin and end are starting and ending iterator.
    cout<<str<<endl;
}