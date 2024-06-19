#include<iostream>
using namespace std;
class A{
    protected:
    int salary;
    public:
    virtual void display() = 0;
};
class B :public A{
    public:
    void setsal(int s){
        salary = s;
    }
    void display() override{
        cout<< "Salary for full-time employee is : " << salary <<"LPA" <<endl;
    }
};
class C :public A{
    public:
    void setsal(int s){
        salary = s;
    }
    void display() override{
        cout<< "Salary for part-time employee is : " << salary << "LPA" <<endl;
    }
};

int main(){
    A* a1;
    B b1;
    a1 = &b1;
    b1.setsal(6);
    a1->display();

    A* a2;
    C c1;
    a2 = &c1;
    c1.setsal(3);
    a2->display();

}