#include<iostream>
using namespace std;


int pivotIndex(int arr[],int n){
    int start=0,end=n-1,ans=1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if (start==end){
            return start;
        }
        else if (mid-1>=0 && arr[mid]<arr[mid-1]){
            return mid-1;
        }
        else if (mid+1<n && arr[mid]>arr[mid+1]) {
            return mid;
        }
        else if (arr[start]>arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr2[]={1,3};
    int arr[]={12,14,16,2,4,6,8,10};
    int n=8,n2=2;
    cout<<"Pivot Index is: "<<pivotIndex(arr2,n2);
    
}