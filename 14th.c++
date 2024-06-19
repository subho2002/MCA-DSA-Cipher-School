#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}

void greet(){
    cout<<"Hello everinion"<<endl;
}
int main(){
    int n1,n2;
    cout<<"Enter the two values"<<endl;
    cin>>n1>>n2;
    greet();
    cout<<"The sum is : "<<sum(n1,n2)<<endl;
    return 0;
}