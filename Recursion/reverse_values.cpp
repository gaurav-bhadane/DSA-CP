#include<iostream>
using namespace std;

void value(int n){
    if (n==1){
        cout<<1<<" ";
        return;
    }
    cout<<n<<" ";
    value(n-1);
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    value(n);
    return 0;
}