#include<iostream>
using namespace std;

int main(){
    int arr[5] = {5,6,3,8,1};
    int max=arr[0];
    int min=arr[0];
    
    for(int i =1;i<5;i++){
        if(arr[i] > max){
           max = arr[i];
        }
    }
    cout << "Max : " << max << endl;

    for(int i =1;i<5;i++){
        if(arr[i] < min){
           min = arr[i];
        }
    }
    cout << "Min : " << min << endl;
    return 0;
}