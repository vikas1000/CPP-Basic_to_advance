#include<iostream>
using namespace std;

int b = 20; // Global variable

int main(){
    int a;         // Local variable

    static int c = 30; // Static
    cout<<"Enter the num: ";
    cin>>a;
    cout<<"The value of a: "<<a<<endl;
    cout<<b<<endl;
    cout<<c;
}