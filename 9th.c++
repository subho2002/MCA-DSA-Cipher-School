#include<iostream>
using namespace std;
int main(){
    int i =1 , j =1;
    for(int i =1;i<=5;i++){
        cout<<"Hello "<<i<<endl;
    }
    while(i<=5){
        cout<<"World "<<i<<endl;
        i++;
    }
    do{
        cout<<"Hello Wolrd "<<j<<endl;
        j++;
    }while(j<=5);
    return 0;
}
