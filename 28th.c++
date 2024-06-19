#include<iostream>
using namespace std;
class constructor{
    int a,b;
    public:
    constructor();
    void display(){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
    }
};
constructor::constructor(){
    a =4;
    b =6;
}
int main(){
    constructor c;
    c.display();
    return 0;
}