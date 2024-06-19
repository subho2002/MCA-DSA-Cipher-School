#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int a = 45;//it cannot be change.
    cout<<a<<endl;
    cout<<setw(4)<<a<<endl;
    return 0;
}