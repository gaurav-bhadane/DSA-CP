#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the height of the Pyramid: ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int k;
        for (int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for (int j=1;j<i+1;j++)
        {
            k=j;
            cout<<k;
        }
        for (int j=k; j>1;)
        {
            j--;
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}