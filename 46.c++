#include<iostream>
#include<cmath>
using namespace std;

class simplecal{
    int a,b;
    public:
    void read(){
        cout << "Enter the first element : " << endl;
        cin >> a;
        cout << "Enter the Second element : " << endl;
        cin >> b;
    }
    void display(){
        cout << "The sum : " << (a+b) << endl;
        cout << "The sub : " << (a-b) << endl;
        cout << "The mul : " << (a*b) << endl;
        cout << "The div : " << (a/b) << endl;
        cout << "The mod : " << (a%b) << endl;
    }
};

class scientifical{
    int a;
    public:
    void seta(){
        cout << "Enter the element : " << endl;
        cin >> a;
    }
    void displaysci(){
        cout << "Cos : " << cos(a) << endl;
        cout << "Sin : " << sin(a) << endl;
        cout << "Tan : " << tan(a) << endl;
    }
};

class hybridcal : public simplecal , public scientifical{

};

int main(){
    hybridcal h1;
    h1.read();
    h1.display(); 
    cout << "Now scientific calculator" << endl;
    h1.seta();
    h1.displaysci();
    return 0;
}