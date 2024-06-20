#include<iostream>
using namespace std;
 
class Base{
    public:
    int varb;
    void display(){
        cout << "Base var : " << varb <<endl;
    }
};

class Derived : public Base{
    public:
    int vard;
    void display(){
        cout << "Base var : " << varb <<endl;
        cout << "Derived var : " << varb <<endl;
    }
};

int main(){
    Base* b;
    Derived d;
    b = &d;
    b->varb = 12;
    b->display();
    cout<<"Now creating the deriver class pointer "<<endl;
    Derived* d1;
    Derived d2;
    d1 = &d2;
    d1->varb = 13;
    d1->vard = 15;
    d1->display();
    return 0;
}