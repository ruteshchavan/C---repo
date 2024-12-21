/*
# to print number rectangle we need nested 2 seprate for loops.
# one loop to print 1 to n.
# second loop to print 1 to (i-1).

1 2 3 4 5
2 3 4 5 1
3 4 5 1 2
4 5 1 2 3
5 1 2 3 4

*/


#include<iostream>
using namespace std;

int main() {
    
    int n;
    cout<< "Enter rectangle rows" << endl;
    cin>>n;

    for (int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++){   // for loop for printing 1 to n and j=i.
            cout<<j<<" ";
        }

        for(int j=1;j<=(i-1);j++){   // for loop for printing 1 to (i-1).
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
