#include<iostream>
using namespace std;
class test{
    int a,b;
    public: 
    test(int i,int j) : a(i),b(j){
        cout << " a : "<< a << endl;
        cout << " b : "<< b << endl;
    }
};

int main(){
    test t(4,5);
    return 0;
}