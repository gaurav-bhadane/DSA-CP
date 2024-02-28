#include<iostream>
using namespace std;

int incrementby1(int n){
    n++;
    return n;
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    n=incrementby1(n);   //Function call by value   i.e the passed value is the value of n not exactly n(means not the complete n having unique address)
    cout<<"After Incrementing value of n: "<<n;
    return 0;
}