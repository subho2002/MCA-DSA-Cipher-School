#include<iostream>
using namespace std;

int main(){
    int arr[8] = {1,2,3,4,5,6,7,8},temp;

    cout << "Array before swapping " <<endl;
    for(int i=0;i<8;i++){
        cout << arr[i] << " ";
    }

    for(int i=0;i<8;i=i+2){
        if(i+1<8){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    cout << endl;
    cout << "Array After swapping " <<endl;

    for(int i=0;i<8;i++){
        cout << arr[i] << " " ; 
    }
    return 0;
}
