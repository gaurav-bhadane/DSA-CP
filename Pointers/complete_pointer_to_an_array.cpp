#include<iostream>
using namespace std;

 int main(){

    int arr[5]={10,20,30,40,50};
    int (*ptr)[5]=&arr;
    cout<<(*ptr)[4]<<endl;

    return 0;
 }