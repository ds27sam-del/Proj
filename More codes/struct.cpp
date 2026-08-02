#include<iostream>
#include<string>
using namespace std;

struct Address {
    int House_Number;
    string Locality;
    string City;
    string State;
    int Pin_Code;
};

struct Patient{
    int Patient_ID;
    string Patient_Name;
    int Age;
    string Disease;

    // Declaration of address struct in patient struct 
    Address A;
};

int main(){
    // Declaration
    Patient p1;

    // Insertion of values in struct 
    p1.Patient_ID=101;
    p1.Patient_Name="Sam";
    p1.Age=19;
    p1.Disease="Cancer";
    p1.A.House_Number=20254;
    p1.A.Locality="Near PNB";
    p1.A.City="Solan";
    p1.A.State="Himachal Pradesh";
    p1.A.Pin_Code=173206;

    // output:
    cout<<"\t===============================\n";
    cout<<"\tThe result of struct patient \t\n";
    cout<<"\t===============================\n";
    cout<<"\tID: "<<p1.Patient_ID <<" \n"
        <<"\tName: "<<p1.Patient_Name << "\n"
        <<"\tAge: "<<p1.Age << "\n"
        <<"\tDisease: "<<p1.Disease << "\n";
    cout<<"\t===============================\n";
    cout<<"\t\n";
    cout<<"\t===============================\n";
    cout<<"\tThe result of struct Address \n";
    cout<<"\t===============================\n";
    cout<<"\tHouse Number: "<<p1.A.House_Number <<" \n"
        <<"\tLocality: "<<p1.A.Locality << "\n"
        <<"\tCity: "<<p1.A.City << "\n"
        <<"\tState: "<<p1.A.State << "\n"
        <<"\tPin Code: "<<p1.A.Pin_Code << "\n";
        
    cout<<"\t===============================\n";

}