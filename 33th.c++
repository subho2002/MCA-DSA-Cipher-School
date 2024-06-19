#include<iostream>
using namespace std;
class constructor{
    int a;
    public:
    constructor(){
        a =2;
    }
    constructor(int a){
        this->a =a;
    }
    constructor(constructor &c){
        cout<<"Copy constructor called"<<endl;
        a = c.a;
    }
     void display(){
        cout<<"The value is"<<a<<endl;
    }
};

int main(){
    constructor c,d(4),e;
    c.display();
    constructor f = d;
    e.display();
    e = d;
    e.display();
    return 0;
}