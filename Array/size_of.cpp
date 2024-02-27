#include<iostream>
using namespace std;

int main(){
    int a=10;
    cout<<"Size of "<<a<<" is: "<<sizeof(a)<<endl;

    int arr[10];
    cout<<"Size of "<<arr<<" is: "<<sizeof(arr)<<endl;   //here sizeof function gives sizeof complete array
    return 0;
}