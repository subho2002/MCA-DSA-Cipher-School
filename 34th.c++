#include<iostream>
using namespace std;
int count;
class consdes{
    public:
    consdes(){
        count++;
        cout<<"Constructor called no. : "<<count<<endl;
    }
    ~consdes(){
        cout<<"Destructor called no. : "<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"We are inside main"<<endl;
    cout<<"We are creating num1"<<endl;
    consdes c;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more Nums"<<endl;
        consdes d,e;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}