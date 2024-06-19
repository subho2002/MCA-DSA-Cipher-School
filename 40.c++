#include<iostream>
using namespace std;
class Base1{
    protected:
    int data1;
    public:
    void setadata1(int d1){
        data1 = d1;
    }
};
class Base2{
    protected:
    int data2;
    public:
    void setdata2(int d2){
        data2 = d2;
    }
};
class Base3{
    protected:
    int data3;
    public:
    void setdata3(int d3){
        data3 = d3;
    }
};
class Derived : public Base1,public Base2,public Base3{
    public:
    void display(){
        cout << "Data1 is : " << data1 <<endl;
        cout << "Data2 is : " << data2 <<endl;
        cout << "Data3 is : " << data3 <<endl;
        cout << "The sum is : " << (data1+data2+data3) <<endl;
    }
};

int main(){
    Derived D1;
    D1.setadata1(2);
    D1.setdata2(3);
    D1.setdata3(5);
    D1.display();
    return 0;
}