#include<iostream>
#include<math.h>
using namespace std;
int decimalToBinaryMethod1(int n)
{
    int ans=0,i=0;
    while(n>0)
    {
        int bit=n%2;
        ans+=bit*pow(10,i);
        n/=2;
        i++;
    }
    
    cout<<ans<<endl;
    return 0;
}
int decimalToBinaryMethod2(int n)
{
    int bit,ans=0,i=0;
    while (n>0)
    {
        bit=n&1;
        ans+=bit*pow(10,i);
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    decimalToBinaryMethod2(n);
    return 0;
}