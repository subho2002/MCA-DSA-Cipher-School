#include<iostream>
using namespace std;
class student{
    protected:
    int roll_no;
    public:
    void setroll(int r){
        roll_no = r;
    }
    void getroll(){
        cout << "The roll no. : " << roll_no <<endl;
    }
};
class test:virtual public student{
    protected:
    int math,phy;
    public:
    void setmarks(int m,int p){
        math=m;
        phy=p;
    }
    void getmarks(){
        cout<<"The marks of math is"<<math<<endl;
        cout<<"The marks of phy is"<<phy<<endl;
    }
};
class sport : virtual public student{
    protected:
    int scr;
    public:
    void setscr(int s){
        scr = s;
    }
    void getscr(){
        cout << "Sprots score : " << scr << endl;
    }
};
class result : public test, public sport{
    private:
    int total;
    public:
    void display(){
        total = math+phy+scr;
        getroll();
        getmarks();
        getscr();
        cout << "The total : " << total << endl;
    }
};

int main(){
    result r;
    r.setroll(22);
    r.setmarks(83,86);
    r.setscr(6);
    r.display();
    return 0;
}