#include<iostream>
using namespace std;

int binary_search(int a[],int start,int end,int target){
    while(start<=end){
        int mid=(start+end)/2;
        if (a[mid]==target){
            return mid;
        }
        else if (a[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

int exponential_search(int a[],int n,int x){
    if (a[0]==x){
        return 0;
    }
    int i=1;
    while(i<n && a[i]<=x){
        i=i*2;
    }
    return binary_search(a,i/2,min(i,n-1),x);
}

int main()
{
    int a[]={3,4,5,6,11,13,14,15,56,70};
    int n=sizeof(a)/sizeof(int);
    int target=13;
    cout<<"Target ELement is at Index: "<<exponential_search(a,n,target);
    return 0;
}