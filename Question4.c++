#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5},sum=0;
    for( int i=0;i<5;i++){
        sum = sum +arr[i];
    }
    int avg = sum / 5;
    cout << " The sum is : " << sum <<endl;
    cout << "The average : " << avg << endl;
    return 0;
}