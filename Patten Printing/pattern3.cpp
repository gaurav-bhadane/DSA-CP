/*
    Hollow Rectangle

    *   *   *   *
    *           *
    *           *
    *   *   *   *
*/

#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the no. of rows: ";
    cin>>r;
    cout<<"Enter the no. of columns: ";
    cin>>c;
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            if (i==0 || i==r-1)
            {
                cout<<"* ";
            }
            else
            {
                if (j==0 || j==c-1)
                {
                    cout<<"* ";
                }
                else
                {
                cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}

