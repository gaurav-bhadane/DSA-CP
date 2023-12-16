#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the limit of series: ";
    cin>>n;
    
        int a=0;
        int b=1;
    cout<<0<<" ";
    for (int i=1;i<n;i++)
    {
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}