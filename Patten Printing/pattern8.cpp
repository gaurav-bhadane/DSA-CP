/*
    Hollow Half Pyramid
    *
    *   *
    *       *
    *           *
    *               *
    *   *   *   *   *   *
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of height: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<i+1;j++)
        {
            if (j==0 || j==i || i==n-1)
            {
                cout<<"* ";
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