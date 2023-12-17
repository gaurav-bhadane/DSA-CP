/*
            A
            ABA
            ABCBA
            ABCDCBA
            ABCDEDCBA
            ABCDEFEDCBA
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
        char ch;
        for(int j=0;j<i+1;j++)
        {
            ch='A'+j;
            cout<<ch;
        }

        for (char alphabet=ch;alphabet>'A';)
        {
            alphabet--;
            cout<<alphabet;
        }
        cout<<endl;
    }
    return 0;
}