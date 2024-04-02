#include<iostream>
using namespace std;

int bsr(int a[],int k,int start,int end){
    int mid=(start+end)/2;
    if (start>end){
        return -1;
    }
    if (a[mid]==k){
        return mid;
    }
    else if (a[mid]<k){
        return bsr(a,k,mid+1,end);
    }
    else{
        return bsr(a,k,start,mid-1);
    }
}

int main()
{
    int arr[]={12,41,52,65,95,101,205};
    int k=41;
    int start=0;
    int end=6;
    cout<<"Index of k is: "<<bsr(arr,k,start,end);
    return 0;
}