#include<iostream>
using namespace std;
struct emp{
    int id;
    float salary;
};

int main(){
    emp e;
    e.id = 12;
    e.salary = 6.4;
    cout<<e.id<<endl;
    cout<<e.salary<<endl;
    return 0;
}