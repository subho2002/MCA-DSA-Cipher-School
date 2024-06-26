#include<string>
#include<iostream>
// #include<cstring>
using namespace std;

int main(){
    char str[20];
    string str2 = "How are you ?";
    int count = 0,i;
    cout << "Enter your name : " << endl;
    cin >> str;
    // getline(str,100);
    // cout << "Your name : " << str <<endl;
    
    for( i=0 ; str[i] != '\0'; i++){
        count ++;
    }     
    cout << count << endl;

    for( i=0 ; str[i] != '\0'; i++){
        if(!isspace(str[i])){
            cout << str[i] ;
        }
    } 
    cout << endl;
    str2.insert(13,str);
    cout << str2;
    return 0;
}