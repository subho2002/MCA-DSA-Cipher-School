#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int add(int a, int b,int c){
    return a+b+c;
}
int main(){
    int a = 2,b = 3,c = 5;
    cout<<"The sum is : "<<add(a,b)<<endl;
    cout<<"The sum is : "<<add(a,b,c)<<endl;
    return 0;
}