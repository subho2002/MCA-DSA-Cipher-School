#include<iostream>
using namespace std;
int search(int arr[],int size,int n){
    int key =0;
    for(int i =1;i<size;i++){
        if(arr[i] == n){
           key = arr[i];
           break;
        }
        else{
            key = 0;
        }
    }
    return key;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n ;
    cout << "Enter a number : " << endl;
    cin>>n;
    cout << "Key : " << search(arr,5,n) << " is in the array";
    return 0;
}