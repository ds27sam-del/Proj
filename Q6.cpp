#include<iostream>
using namespace std;
int main(){
    int present=0;
    char current;

    cout<<"==========================\n";
    cout<<"Attendance system \n";
    cout<<"==========================\n";

    for (int i=1;i<=20;i++){
        cout<<"Enter your attendance for roll.no "<<i<<" : ";
        cin>>current;

        if (current == 'P' || current == 'p'){
            cout<<"\nAttendance marked \n";
            present++;
        }
        else{
            cout<<"\nMarked\n";
            continue;
        }
    }
    cout<<"=====================================================\n";
    cout<<"Total "<< present <<" students are present in college\n";
    cout<<"=====================================================\n";
    return 0;
}