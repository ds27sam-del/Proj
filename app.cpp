#include<iostream>
using namespace std;
int main(){
    int balance=500;
    int c;
    int v;
    cout<< " *********** ATM ********** \n1. Check balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n Enter your choice :";
    cin>>c;
    switch (c) {
        case 1:
            cout<<"Current balance : "<<balance <<"\n";
            cout<<"Thankyou for using ATM";
            break;
        case 2:
            cout<<"Enter the amount to deposit : ";
            cin>>v;
            balance+=v;
            cout<<"The balance is : "<< balance << "\n";
            cout<<"Thankyou for using ATM";
            break;
        case 3:
            cout<<"Enter the withdraw amount";
            cin>>v;
            if(balance<=v){
                balance-=v;
                cout<<"Remaining balance : "<<balance;
            }
            else{
                cout<<"insufficient balance : "<<balance;
            }  
            break;
        default:
            cout<<"Invalid option choice again";
            break;
    } 
}