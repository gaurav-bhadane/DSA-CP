#include<iostream>
using namespace std;

int main(){
    int a=10;
    cout<<"Address of "<<a<<" is: "<<&a<<endl;

    int arr[10];
    cout<<"Address of "<<arr<<" is: "<<&arr<<endl; //Array can be addressed using arr and also &arr
    cout<<"Address of "<<arr<<" is: "<<arr<<endl;
    return 0;
}