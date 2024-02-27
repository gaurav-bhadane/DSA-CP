#include<iostream>
using namespace std;

void reverseArray(int arr[],int size,int a[]){
    for (int i=0;i<size;i++){
        a[i]=arr[size-i-1];
    }
    cout<<"New Array is as follows"<<endl;
    for (int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}

void swapReverseArray(int arr[],int n){
    int left=0;
    int right=n-1;
    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6]={10,50,56,122,48,1};
    int a[6];
    int n=6;
    swapReverseArray(arr,n);
    // reverseArray(arr,n,a);
    return 0;
}