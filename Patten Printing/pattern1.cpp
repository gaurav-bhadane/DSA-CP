/*
    Square Pattern

    *   *   *   *
    *   *   *   *
    *   *   *   *
    *   *   *   *

*/
#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the no. of Rows: ";
    cin>>r;
    cout<<"Enter the no. of Columns: ";
    cin>>c;
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}