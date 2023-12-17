/*
                            *
                        *       *
                    *       *       *
                *       *       *       *
                    *       *       *
                        *       *
                            *
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the height of the Pyramid: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for (int j=0;j<i+1;j++)
        {
            cout<<"* ";
        }
        

        cout<<endl;
    }
    for (int i=0;i<n;i++)
    {
        //downward
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for (int j=0;j<n-i;j++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
    
    return 0;
}