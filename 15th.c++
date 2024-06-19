#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int *a,int *b){
    int temp = *a;
    *a =*b;
    *b =temp;
}

int main(){
    int n1,n2;
    cout<<"Enter the two values"<<endl;
    cin>>n1>>n2;
    cout<<n1<<" "<<n2<<endl;
    swap(n1,n2);
    cout<<n1<<" "<<n2<<endl;
    swap2(&n1,&n2);
    cout<<n1<<" "<<n2<<endl;
    return 0;
}