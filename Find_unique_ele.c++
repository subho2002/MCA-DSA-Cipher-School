#include<iostream>
using namespace std;

int main(){
    int arr[5] = {2,3,2,4,4};
    int n =0;
    for(int i =0;i<5;i++){
        cout << arr[i] <<" ";
    } 
    cout << endl;
    for(int i=0;i<5;i++){
        n = n ^ arr[i];
    }
    cout << "Unique element : " << n <<endl;
    return 0;
}