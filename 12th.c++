#include<iostream>
using namespace std;
int main(){
    int m[4]={1,2,3,4};
    int m2[4];
    m2[0] = 2;
    m2[1] = 3;
    m2[2] = 6;
    m2[3] = 8;
    for(int i=0;i<4;i++){
        cout<<m[i]<<endl;
    }
    int *p = m2;
    for(int i=1;i<=4;i++){
        cout<<*(p+i)<<endl;
    }
    return 0;
}