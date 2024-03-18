#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int *ptr=&a;
    cout<<ptr<<endl;
    char ch='g';
    char *ptr2=&ch;
    //Size Calculated
    // cout<<"Size of ptr: "<<sizeof(ptr)<<endl;
    // cout<<"Size of ptr2: "<<sizeof(ptr2)<<endl;
    a=a+1;
    ptr=ptr+1;
    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    return 0;
}