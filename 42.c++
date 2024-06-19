#include<iostream>
using namespace std;
class Base1 { 
    public:
    void display(){
        cout << "what's up ? " <<endl;
    }
};
class Base2 {
    public:
    void display(){
        cout << "orr vai ? " <<endl;
    }
};
class Derived : public Base1 ,public Base2{
    public:
    void display(){
        Base1::display();
    }
};
int main(){
    Base1 b1;
    b1.display();
    Base2 b2;
    b2.display();
    Derived d;
    d.display();
    return 0;
}
