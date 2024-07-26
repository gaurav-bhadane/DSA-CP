#include<iostream>
using namespace std;

int main(){
    
    int arr[6]={10,20,30,40,50,60};
    int n=6;
    int temp=arr[5];
    int tem=arr[4];
    
    for (int i=n-1;i>0;i--){
        arr[i]=arr[i-2];
    }
    
    arr[0]=tem;
    arr[1]=temp;
    
    
    
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}