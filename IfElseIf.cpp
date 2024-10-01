// WAP to print the grade for percentage.

#include<iostream>
using namespace std;

int main() {
    int grade;
    cout<<"Enter the Percentage"<<endl;
    cin>>grade;

    if(grade<0 || grade>100) {
        cout<<"Wrong Percentage";
    }

    else if(grade>=0 && grade<40){
        cout<<"Fail"<<endl;
    }

    else if(grade>=50 && grade<60){
        cout<<"Grade 'D' "<<endl;
    }

    else if(grade>=60 && grade<70){
        cout<<"Grade 'C' "<<endl;
    }

    else if(grade>=70 && grade<80){
        cout<<"Grade 'B' "<<endl;
    }

    else if(grade>=80 && grade<90){
        cout<<"Grade 'A' "<<endl;
    }

    else if(grade>=90 && grade<100){
        cout<<"Grade 'A+' "<<endl;
    }
    return 0;

}