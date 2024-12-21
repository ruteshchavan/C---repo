#include<iostream>
#include<vector>     
using namespace std;

int main() {
    vector<int> v;

    for(int i=0;i<5;i++) {
        int element;
        cin>>element;
        v.push_back(element);
    }

    for(int i=0;i<5;i++) {
        cout<<v[i]<<"  ";
    }

    cout<<endl;

    v.insert(v.begin()+2,9);  // inserting element at index 2 // begin() specifies the 1st element of vector
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<"  ";
    }

    cout<<endl;

    v.erase(v.end()-2);   // deleting element from last index  // end() specifies the 1st element of vector
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<"  ";
    }
}
