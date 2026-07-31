#include<iostream>
using namespace std;

int sum(int &x,int &y){
    int sum=x+y;
    cout<<"sum= :"<<sum;
    return sum;
}

int main(){
    int a,b;
    cout<<"Enter value 1 :";
    cin>>a;
    cout<<"Enter the value for 2 :";
    cin>>b;
    sum(a,b);
}