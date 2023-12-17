/*
                    Full Pyramid
                            *
                        *   *   *
                    *   *   *   *   *
                *   *   *   *   *   *   *
            *   *   *   *   *   *   *   *   *   
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the height of pyramid: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int k=0;
        for (int j=0;j<2*n-1;j++)
        {
            if (j<n-1-i)
            {
                cout<<"  ";
            }
            else if (k<2*i+1)
            {
                cout<<"* ";
                k++;
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