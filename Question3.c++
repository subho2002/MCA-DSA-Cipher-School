#include<iostream>
using namespace std;

template<class T>
class addition{
    private:
    T a,b;
    public:
    addition(T a,T b){
        this->a =a;
        this->b =b;
    }
    T add(){
        cout << "Sum : " << (a+b) <<endl;
    }
};

int main(){
    addition <int> a1(2,3);
    a1.add();
    addition <float> a2(2,3);
    a2.add();
    return 0;
}