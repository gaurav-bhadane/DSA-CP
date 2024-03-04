#include<iostream>
using namespace std;

int oddOccurence(int arr[],int n){
    int start=0,end=n-1;

    while(start<=end){
        int mid=(start+end)/2;
        if (start==end){
            return arr[start];
        }
        if (n%2==0){
            if (arr[mid]==arr[mid+1] && mid+1<n){
                start=mid+2;
            }
            else{
                end=mid-1;
            }
        }
        else{
            if (arr[mid]==arr[mid-1] && mid-1>=0){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;




    // while(start<end){
    //     int mid=(start+end)/2;
    //     if(n==1){
    //         return arr[start];
    //     }
    //     if((mid%2==0 && arr[mid]==arr[mid+1])||(mid%2==1 && arr[mid]==arr[mid-1])){
    //         start=mid+1;
    //     }
    //     else{
    //         end=mid;
    //     }
    // }
    // return arr[start];
}

int main(){
    
    int arr[]={1,1,3,3,3,4,4};
    int n=7;
    cout<<"The No. Occuring Odd times is: "<<oddOccurence(arr,n);
    return 0;
}