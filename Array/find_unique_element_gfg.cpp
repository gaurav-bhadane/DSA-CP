#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int unique(int arr[],int n,int k){
    sort(arr,arr+n);
    for(int i=0;i<n;i+=k){
        if (arr[i]!=arr[i+k-1]){
            return arr[i];
        }
    }
    return -1;
}



int main()
{
    int arr[]={6,2,5,2,2,6,6};
    int k=3; //No. of Repetitions of a particular number;
    int n=7;
    cout<<"Unique Element is: "<<unique(arr,n,k);
}