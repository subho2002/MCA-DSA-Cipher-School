#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int roll,age;
    char grade;

    public:
    void setName(string newName){
        name = newName;
    }
    void setRollnumber(int rll){
        roll= rll;
    }
    void setAge(int ag){
        age = age;
    }
    void setGrade(char g){
        grade = g;
    }
    string getName(){
        return name;
    }
    int getRoll(){
        return roll;
    }
    int getAge(){
        return age;
    }
    char getGrade(){
        return grade;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll : "<<roll<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Grade : "<<grade<<endl;
    }
};

int main(){
    student s;
    s.setName("Debasish");
    s.setRollnumber(11);
    s.setAge(22);
    s.setGrade('B');
    s.getName();
    s.getRoll();
    s.getAge();
    s.getGrade();
    s.display();
    return 0;
}