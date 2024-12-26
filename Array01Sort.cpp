/* # WAP to sort an array consisting of only 0 and 1.

*/

#include<iostream>
#include<vector>     
using namespace std;

// creating a function to sort vector elements.
void sortVector(vector<int>&v) {
    int count=0;   // creating a variable that will count 0's.

    for(int ele:v){     // for each loop will traverse the entire vector and count no. of 0's.
        if(ele==0){
            count++;
        }
    }

// for loop will update the vector and arrange the elements in 0's & 1's
for(int i=0;i<v.size();i++){
    if(i<count){
        v[i]=0;
    }
    else{
        v[i]=1;
    }
}
}

int main() {

    int n;
    cout<<"Enter the size of :"<<endl;
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements :"<<endl;   

// for loop to receive elements.
    for(int i=0;i<n;i++){   
        int ele;
        cin>>ele;
        v.push_back(ele);  
    }

// calling function
sortVector(v);

for(int i=0;i<n;i++){   
        cout<<v[i]<<" ";
    }
    
}

