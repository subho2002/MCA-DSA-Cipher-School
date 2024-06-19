#include<iostream>
using namespace std;
int main(){
    int a =4;
    int* b =&a;
    cout << "*b : " << *b <<endl;
    int *c = new int(5);
    cout << "*c : " << *c <<endl;
    int *arr = new int[3];
    arr[0] =2;
    arr[1] =3;
    arr[2] =5;
    cout << "arr[0] : " << arr[0] << endl;
    cout << "arr[1] : " << arr[1] << endl;
    cout << "arr[2] : " << arr[2] << endl;
    return 0;
}