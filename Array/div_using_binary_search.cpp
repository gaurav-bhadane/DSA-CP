#include<iostream>
using namespace std;

int division(int dvd,int div){
    int start=0,end=dvd,ans=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if (mid*div==dvd){
            ans=mid;
        }
        else if (mid*div>dvd){
            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
    }
    return ans;
}

int main(){

    int dividend=-29,divisor=7;
    int ans=division(abs(dividend),abs(divisor));
    if (dividend>0 && divisor<0 || dividend<0 && divisor>0 ){
        
        ans=0-ans;
    }
    cout<<"Answer is: "<<ans;
    return 0;
}