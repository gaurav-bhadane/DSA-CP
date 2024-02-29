#include<iostream>
using namespace std;

int getUnique(int arr[],int n){
    int ans=0;
    for (int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{
    int arr[7]={25,15,18,25,63,15,18};
    int n=7;

    int ans=getUnique(arr,n);
    cout<<"Unique Element is: "<<ans;

    return 0;
}