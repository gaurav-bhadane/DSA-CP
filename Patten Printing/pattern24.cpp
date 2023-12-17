/*
                    1
                  1 2 1
                1 2 3 2 1
              1 2 3 4 3 2 1
            1 2 3 4 5 4 3 2 1
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the height of Pyramid: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int k;
        for (int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for (int j=1;j<=i+1;j++)
        {
            k=j;
            cout<<k<<" ";
        }

        for (int j=k;j>1;)
        {
            j--;
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}