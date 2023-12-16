#include<iostream>
#include<math.h>
using namespace std;
int binaryToDecimalMethod1(int n)
{
    int bit,ans=0,i=0;
    while (n>0)
    {
        bit=n%10;
        ans+=pow(2,i)*bit;
        n/=10;
        i++;
    }
    cout<<ans;
    
}
int main()
{
    int n;
    cin>>n;
    binaryToDecimalMethod1(n);
    return 0;
}