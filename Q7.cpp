// Calculate the area of rectangle using function
#include<iostream>
using namespace std;

void rec(int l,int b){
    cout<<"===================================\n";
    cout<<"    Area Calculator of Rectangle   \n";
    cout<<"===================================\n";
    cout<<"The area of rectangle is : "<< l*b <<"\n";
    cout<<"===================================\n";
}

int main(){
    int length;
    int breath;

    cout<<"Enter the length of rectangle :";
    cin>>length;

    cout<<"Enter the breath :";
    cin>>breath;

    rec(length,breath);
}