// Q10.Function With Arguments and With Return Value
// Print the percentage

#include<iostream>
#include<string>
using namespace std;

int marks(int arr[5]){
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    };
    float result=(sum/500.0f)*100;
    return result;
}

int main(){
    int arr[5];
    float result;
    string sub[5]={"Computer Organization","C++","Maths","Business","Desktop Publcation"};
    cout<<"\n===\t Result Check System  \t===\n";
    for(int i=0;i<5;i++){
        cout<<"Enter the marks for subject "<< sub[i] << " : ";
        cin>>arr[i];
    }
    result=marks(arr);
    cout<<"===\t Result of 3rd sem is \t===\n";
    cout<<"===\t\t "<< result <<" % \t\t===\n";
}