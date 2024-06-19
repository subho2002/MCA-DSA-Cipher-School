#include<iostream>
using namespace std;
int fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}
int fibo(int n){
    if(n<2){
        return 1;
    }
    return fibo(n-2)+fibo(n-1);
}
int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"The Factorial is : "<<fact(a)<<endl;
    cout<<"The Fibonacci is : "<<fibo(a)<<endl;
    return 0;
}