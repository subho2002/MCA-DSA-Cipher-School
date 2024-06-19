#include<iostream>
using namespace std;
class constructor{
    int a , b, c;
    public:
    constructor(int a,int b=3,int c=5){
        this->a =a;
        this->b =b;
        this->c =c;
    }
    void display(){
        cout<<"The value of A is"<<a<<",B is"<<b<<"And C is"<<c<<endl;
    }
};
int main(){
    constructor c(2);
    c.display();
    return 0;
}