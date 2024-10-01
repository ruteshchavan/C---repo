// different ways to declare string.
/* 
  different string functions -
    .insert(index_no , "String_name"); inserts the string
    .find("string_name"); finds the string 
    .erase(index_no , elements_no); erases the specific index to index string
    .clear(); clears the whole string
    .size(); outputs the length of string
    .substr(index_no, string_length);  displays the substring of orignal string
     stoi(string_name);  converts the integer string to integer
*/

#include<iostream>
#include<string>
using namespace std;

int main() {

    string str1;
    getline(cin,str1); // string function used to read the line. 

    string str2="Welcome";
    
    string str3;
    cin>> str3;

    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;

    string str4 = " Family";
    cout<< str4[3] <<endl;   // outputs the string element through indexing;

    // append function is used to join the 2 string.
    // using + operator 2 strings can be joined.
    str2.append(str4);
    cout << str2 << endl;

    return 0;

}
