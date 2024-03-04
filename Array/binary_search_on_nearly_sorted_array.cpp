#include<iostream>
using namespace std;

int Binary(int arr[],int n,int t){
    int start=0,end=n-1,ans=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if (arr[mid]==t){
            ans=mid;
        }
        if (mid-1>=0 && arr[mid-1]==t){
            ans=mid-1;
        }
        if (mid+1<n && arr[mid+1]==t){
            ans=mid+1;
        }
        if (arr[mid]<t){
            start=mid+2;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    int a[]={20,10,30,50,40,70,60};
    int n=7;
    int target=60;
    cout<<target<<" found at Index: "<<Binary(a,n,target);
}