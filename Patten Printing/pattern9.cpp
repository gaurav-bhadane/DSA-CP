/*
    Hollow Half Pyramid
   *    *   *   *   *   *
   *                *
   *            *
   *        *
   *    *
   * 
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
        for (int j=i;j<n;j++)
        {
            if (j==i || j==n-1|| i==0)
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