#include<iostream>
using namespace std;

class stn{
    protected:
    int roll_no;
    public:
    void setroll(int r){
        roll_no = r;
    }
    void getroll(){
        cout << "Roll no. : " << roll_no << endl;
    }
};
class exam : public stn {
    protected : 
    int math ,phy;
    public :
    void setmarks(int m ,int p){
        math =m;
        phy = p;
    }
    void getmarks(){
        cout << "Math marks is : " << math << endl;
        cout << "Phy marks is : " << phy << endl;
    }
};
class result : public exam{
    public:
    void display(){
        getroll();
        getmarks();
        cout << "The percentage is : " << (math+phy)/2 << endl;
    }
};

int main(){
    result D;
    D.setroll(22);
    D.setmarks(86,83);
    D.display();
    return 0;
}