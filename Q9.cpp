// Q9.Function Without Arguments and With Return Value

#include<iostream>
using namespace std;

float rec(){
    float r;
    float area;
    cout<<"Enter the radius of a circle : " ;
    cin>> r;

    area=3.14*(r*r);
    return area;
}

int main(){
    float result;
    result=rec();
    cout<<"the result from main function is : "<< result;
    return 0;
}