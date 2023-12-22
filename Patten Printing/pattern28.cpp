#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the height of the Pyramid: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        char ch;
        for (int k=0;k<n-i-1;k++)
        {
            cout<<" ";
        }
        for (int j=0;j<i+1;j++)
        {
            ch='A'+j;
            cout<<ch;
        }

        for (char i=ch;i>'A';)
        {
            i--;
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}