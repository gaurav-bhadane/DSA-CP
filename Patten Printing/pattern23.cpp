/*
    1 2 3 4 5
    2 3 4 5
    3 4 5
    4 5
    5
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the height of Pyramid: ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int k;
        for (int j=1;j<=n-i+1;j++)
        {
            k=i;
            cout<<k+j-1<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}