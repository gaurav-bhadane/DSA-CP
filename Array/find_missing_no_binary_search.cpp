#include<iostream>
using namespace std;

int missingNo(int arr[],int n){
    
        int start=0,end=n-1,ans=-1;
        while(start<=end){
            int mid=(start+end)/2;
            int diff=arr[mid]-mid;
            if(diff==1){
                start=mid+1;
            }
            else{
                ans=mid;
                end=mid-1;
            }
        }
        if(ans+1==0){
            return n+1;
        }
        return ans+1;
}

int main(){
    int arr[]={1,2,3,5,6,7,8};
    int n=8;
    int ans=missingNo(arr,n);
    cout<<"Missing No. is: "<<ans;

}