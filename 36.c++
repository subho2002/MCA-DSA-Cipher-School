#include<iostream>
using namespace std;

class employee{
    public:
    int id;
    employee(){}
    employee(int idd){
        id = idd;
    }
};

class prog : public employee{
    public:
    int code;
    prog(int idd){
        id = idd;
        code = 6;
    }
    void display(){
        cout << "ID is : " << id << endl;
        cout << "Code is : " << code << endl;
    }
};

int main(){
    employee e1(21);
    cout << e1.id << endl;
    prog p1(22);
    p1.display();
    return 0;
}