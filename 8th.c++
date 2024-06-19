#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;
    if(age>18){
        cout<<"youe can Drive"<<endl;
    }
    else if (age == 18){
        cout<<"You can still Drive"<<endl;
    }
    else{
        cout<<"You cannot Drive"<<endl;
    }

    switch (age)
    {
    case 18:
        cout<<"You are eighteen"<<endl;
        break;
    case 20:
        cout<<"You are twenty"<<endl;
        break;
    case 22:
        cout<<"You are twenty-two"<<endl;
        break;
    default:
        cout<<"Don't know your age"<<endl;
        break;
    }
    return 0;
}
