#include<iostream>
using namespace std;

int fibonacci(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    int ans=0;

    ans=fibonacci(n-1)+fibonacci(n-2);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}