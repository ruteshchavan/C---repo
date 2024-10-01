// WAP to check wether element is present in mtrix or not. 

#include<iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"matrix is :\n";
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n"; 
    int x;
    cout<<"Enter Element to check presemt in matrix or not :"<<endl;
    cin>>x;

    bool flag=false; 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(arr[i][j]==x){
                flag=true;
           }
        }
        if(flag){
            cout<<"Element is found. \n";
        }
        else{
            cout<<"Element is Not found. \n";
        }
    return 0;
    }
}