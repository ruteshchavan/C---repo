/*
# Vectors are dynamic array.Dynamic array means we can resize any array , insert/delete elements.
# in vectors contigious memory is been allocated.
*/

#include<iostream>
#include<vector>     // including vector header file
using namespace std;

int main() {
    vector<int> v;  // defining vector   syntax: vector<data_type> vector_name

    cout<<"size of vector : "<<v.size()<<endl;   // size of vector
    cout<<"capacity of vector : "<<v.capacity()<<endl;    // capacity of vector

    v.push_back(10);
    cout<<"size of vector : "<<v.size()<<endl;   
    cout<<"capacity of vector : "<<v.capacity()<<endl;

    v.push_back(20);
    v.push_back(30);
    cout<<"size of vector : "<<v.size()<<endl;   
    cout<<"capacity of vector : "<<v.capacity()<<endl; 

    v.resize(12);   // it will resize the vector
    cout<<"size of vector : "<<v.size()<<endl;   
    cout<<"capacity of vector : "<<v.capacity()<<endl; 

    v.pop_back();    // it will delete the end element 
    v.pop_back();
    cout<<"size of vector : "<<v.size()<<endl;   // capacity of vector increases depending upon compiler
    cout<<"capacity of vector : "<<v.capacity()<<endl;  // usally the capacity increases in 2's power
    

}