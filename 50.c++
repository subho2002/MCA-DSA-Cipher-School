#include<iostream>
using namespace std;

class complex{
    int r ,i;
    public:
    void setdata(int a,int b){
        r = a;
        i = b;
    }
    void getdata(){
        cout<<"The real value is"<<r<<endl;
        cout<<"The imaginary value is"<<i<<endl;
    } 
};

int main(){
    complex *ptr =  new complex ;
    ptr->setdata(2,3);
    ptr->getdata();

    complex *ptr2 = new complex[2];
    ptr2->setdata(0,5);
    ptr2->getdata();
    return 0;
}