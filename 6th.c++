#include<iostream>
using namespace std;
int c =4;
int main(){
    int c = 5;
    cout<<c<<endl;
    cout<<::c<<endl;
    cout<<sizeof(c)<<endl;
    cout<<float(c)<<endl;
}