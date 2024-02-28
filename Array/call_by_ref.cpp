#include<iostream>
using namespace std;

void incrementby1(int &n){  //call by reference i.e int  &n=n alias phenomenon due to this the updation will be only in one copy no seperate copies will be created
    n++;
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    incrementby1(n);
    cout<<"After Incrementing value of n: "<<n;
    return 0;
}