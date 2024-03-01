#include<iostream>
using namespace std;

int main(){
    int arr[7]={10,20,30,40,50,60,70};
    int n=7,k=3;

    for(int i=0;i<n;i++){
        int j=(i+k)%n;
        swap(arr[i],arr[j]);
    }

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}