#include<iostream>
using namespace std;
int main(){
    int age;
    bool eligible;
    cout<<"Enter your age:";
    cin>>age;
    eligible=(age>=18);
    if(eligible){
        cout<<"The bool value is : "<<eligible <<"\n";
        cout<<"Congratulations. You are eligible to vote.";
    }
    else{
        cout<<"The bool value is :"<<eligible <<"\n";
        cout<<"You are under 18 ";
    }
    return 0;
}