#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
        a=0;
    }
    number(int num){
        a=num;
    }
    number(number &obj){
        cout<<"Copy constructor called"<<endl;
        a=obj.a;
    }
    void display(){
        cout<<"The value is"<<a<<endl;
    }
};
int main(){
    number x,z(4),z2;
    x.display();
    z2=z;
    z2.display();
    number z3=z;
    z3.display();
    return 0;

}