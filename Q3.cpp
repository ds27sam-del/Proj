#include<iostream>
#include<string>
using namespace std;
int main(){
    string username,password;
    bool login;
    
    cout<<"Enter your username :";
    cin>>username;

    cout<<"Enter your password :";
    cin>>password;

    login=(username == "admin" && password == "1234");
    if(login){
        cout<<"Bool value is : "<<login <<"\n";
        cout<<"WellCome back Sir ";
    }
    else{
        cout<<"Bool value is :"<<login <<"\n";
        cout<<"Login denied  ";
    }
    return 0;
}