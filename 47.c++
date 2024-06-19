#include<iostream>
using namespace std;
class Base1{
    int d1;
    public:
    Base1(int i){
        d1 = i;
    }
    void display(){
        cout << "Data1 : " << d1 <<endl;
    }
};
class Base2{
    int d2;
    public:
    Base2(int i){
        d2 = i;
    }
    void display2(){
        cout << "Data1 : " << d2 <<endl;
    }
};
class Derived : public Base1,public Base2{
    int der1,der2;
    public:
    Derived(int a,int b,int c,int d):Base1(a),Base2(b){
        der1 = c;
        der2 = d;
    }
    void display3(){
        cout << " derived1 : " << der1 << endl;
        cout << " derived2 : " << der2 << endl;
    }
};
int main(){
    Derived d1(1,2,3,4);
    d1.display();
    d1.display2();
    d1.display3();
    return 0;
}