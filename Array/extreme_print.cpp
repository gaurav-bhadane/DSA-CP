#include<iostream>
using namespace std;

void extremeVal(int arr[],int n){
    int left=0;
    int right=n-1;
    while(left<=right){
        if (left==right){
            cout<<arr[left];
        }else{
            cout<<arr[left]<<" ";
            cout<<arr[right]<<" ";
        }
        
        left++;
        right--;
    }
}

int main(){
    int arr[6]={10,20,30,40,50,60};
    int n=6;
    extremeVal(arr,n);
    // reverseArray(arr,n,a);
    return 0;
}