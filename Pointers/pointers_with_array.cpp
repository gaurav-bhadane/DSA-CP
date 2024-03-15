#include<iostream>
using namespace std;

int main()
{
    int arr[]={10,20,30,40,50};
    //All these Following three Commands will Print Same Base Address
    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl;

    //New;
    // cout<<4[arr]<<endl;
    // cout<<*(arr)+1<<endl;
    // cout<<*(arr+2)<<endl;

    char ch[50]="Gaurav";
    char *cptr=ch;
    cout<<cptr<<endl;
    cout<<*cptr<<endl;
    cout<<*(cptr+1)<<endl;


    return 0;
}