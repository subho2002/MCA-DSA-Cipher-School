#include<iostream>
using namespace std;
class constructor{
    int a,b;
    public:
    constructor(){
        a = 2;
        b = 2;
    }
    constructor(int a){
        this->a = a;
        b = 2;
    }
    constructor(int a,int b){
        this->a = a;
        this->b = b;
    }
    void display(){
        cout<<"The value of a"<<a<<" and b is"<<b<<endl;
    }
};
int main(){
    constructor c1;
    c1.display();
    constructor c2(4);
    c2.display();
    constructor c3(4,6);
    c3.display();
    return 0;
}