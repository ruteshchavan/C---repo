/*
print hollow rectanglular pattern
# for hollow rectangle we just need to add if else condition to print hollow part or pattern part 
  depending upon the condition.

* * * * *
*       *
*       *
*       *
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

        if(i==1 || i==row || j==1 || j==column ){
        cout<<"*";
        }
        else {
            cout<<" ";
        }
    }
    cout<<endl;
}
return 0;
}