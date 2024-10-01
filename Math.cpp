// WAP to find power , sqrt , cbrt and hypotenuse of a right angle triangle.

#include<iostream>
#include<cmath>
using namespace std;

int main() { 
  int x=2;  
  int y=3;
  int z=8;  

  int power=pow(x,y);  
  cout << "Power of a given number is : "<< power <<endl; 

  cout << "Cube root of z is : "<< cbrt(z) <<endl; 
 
  cout << "Third side of a triangle is : "<< hypot(x,y);  
  return 0;  
}
