#include<iostream>
using namespace std;
int power(int n)
{
    if (n==0){
        return 1;
    }
    int ans=1;
    ans=2*power(n-1);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Answer is: "<<power(n);
    return 0;
}