#include<iostream>
using namespace std;
inline int product(int a,int b){
    return a+b;
}
int prooduct(int a=4,int b=5){
    return a*b;
}
int main(){
    int n1 = 4, n2 =6;
    cout<<"The product is : "<<product(n1,n2)<<endl;
    cout<<"The product is : "<<prooduct()<<endl;
    return 0;
}