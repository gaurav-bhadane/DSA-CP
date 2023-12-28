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
        for (int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<i+1;j++)
        {
            ch='A'+j;
            cout<<ch;
        }
        for (char j=ch;j>'A';)
        {
            j--;
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}