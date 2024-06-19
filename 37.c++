#include<iostream>
using namespace std;
class Base{
    int d1;
    public:
    int d2;
    void setdata(){
        d1 =10;
        d2 =20;
    }
    int getd1(){
        return d1;
    }
};
class Derived : public Base{
    int d3;
    public:
    void Process(){
        d3 = getd1() + d2;
    }
    void display(){
        cout << "Data1 : " << getd1() <<endl;
        cout << "Data2 : " << d2 <<endl;
        cout << "Data3 : " << d3 <<endl;
    }
};
int main(){
    Derived d1;
    d1.setdata();
    d1.Process();
    d1.display();
    return 0;
}