#include<iostream>
using namespace std;

int main(){

    int a=5;
    int * ptr=&a;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Address of a: "<<&a<<endl;
    cout<<"Address of a using Pointer: "<<ptr<<endl;
    cout<<"Value of a using Pointer: "<<*ptr<<endl;
    cout<<"Address of Pointer: "<<&ptr<<endl;
    return 0;
}