/*
print rectanglular pattern

* * * * *
* * * * *
* * * * *

*/

#include <iostream>
using namespace std;

int main () {
cout<<"Enter rows and columns "<<endl;
int row , column;
cin>>row>>column;

for(int i=1;i<=row;i++) {
    for(int j=1;j<=column;j++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}
return 0;
}