#include<iostream>
using namespace std;

void print(int *arr,int n,int i){
    if(i>=n){
        return;
    }
    cout<<*(arr+i)<<" ";
    print(arr,n,i+1);
}

int main()

{
    int arr[6]={10,20,30,40,50,60};
    int n=6;
    int i=0;
    print(arr,n,i);
}