#include<iostream>
using namespace std;

int main(){
    int arr[6]={10,20,30,40,50,60};
    int n=6;

    int temp=arr[0];
    for (int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }

    arr[n-1]=temp;

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}