#include<iostream>
using namespace std;

int count(int n){
    if (n==1){
        return 1;
    }
    int ans=0;
    ans=n+count(n-1);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Reverse Counting of "<<n<<" is: "<<count(n);
    return 0;
}