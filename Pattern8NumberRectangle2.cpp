/*
1 2 1 2 1
2 1 2 1 2
1 2 1 2 1
2 1 2 1 2
1 2 1 2 1
*/

#include <iostream>
using namespace std;

int main () {
cout<<"Enter rows and columns "<<endl;
int row , column;
cin>>row>>column;

for(int i=1;i<=row;i++) {
    for(int j=1;j<=column;j++){
        
        if((i+j)%2==0){
            cout<<1<<" ";
        }
        else{
            cout<<2<<" ";
        }

    }
    cout<<endl;
}
return 0;
}