#include<iostream>
using namespace std;
class shop{
    int id,price;
    public:
    void setdata(int i,int p){
        id = i ;
        price = p;
    }
    void getdata(){
        cout << "The id is" << id << endl;
        cout << "The price is" << price << endl;
    }
};

int main(){
    int size = 3;
    shop *ptr = new shop [size];
    shop *ptr2 = ptr;
    int p,i,q;
    for(int i =0;i<size;i++){
        cout<<"Enter the id and price"<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for(int i =0;i<size;i++){
        cout<<"The id and price is"<<endl;
        ptr2->getdata();
        ptr2++;
    }
    return 0;
}