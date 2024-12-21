#include<iostream>
using namespace std;

class ABC {
    int x;

    public :
    void num(int n) {
        x= n;
    }

    int fun(){
        return x;
    }
};

int main() {
    ABC obj;
    obj.num(5);
    cout<<obj.fun()<<endl;
}
