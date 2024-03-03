#include<iostream>
using namespace std;

int binarySearch(int a[],int n,int target){
    int start=0,end=n-1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end){
        if (a[mid]==target){
            start=mid+1;
            ans=mid;
        }
        else if (a[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}


int main(){
    int a[8]={2,4,4,4,10,12,14,16};
    int n=8;
    int target=4;
    int ans=binarySearch(a,n,target);
    if (ans!=-1){
        cout<<"Last Index of Target Found at Index: "<<ans;
    }
    else{
        cout<<"Element Not Found";
    }
}