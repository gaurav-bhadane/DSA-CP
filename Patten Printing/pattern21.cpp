/*
            1
            1 2
            1   3
            1     4
            1       5
            1 2 3 4 5 6
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the height of the Pyramid: ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            if (j==1 || i==1 || j==i || i==n)
            {
                cout<<j<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}