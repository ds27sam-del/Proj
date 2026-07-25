#include<iostream>
using namespace std;
int main(){
    float student_per,income;
    cout<<"Enter your percentage : ";
    cin>>student_per;

    cout<<"Enter income :";
    cin>>income;

    (student_per>=80.00 && income<=200000.00) ? cout<<"Eligible for scholarship" : cout<<"not Eligible";
    return 0;
}