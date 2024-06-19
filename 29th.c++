#include<iostream>
using namespace std;
class constructor{
    int a ,b;
    public:
    constructor(int a,int b){
        this->a = a;
        this->b = b;
    }
    void display(){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
    }
};
int main(){
    constructor c(4,6);
    c.display();
}