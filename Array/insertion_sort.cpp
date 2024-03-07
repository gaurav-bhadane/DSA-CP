#include<iostream>
using namespace std;

int main(){

    int a[]={25,84,17,3,20};
    int n=5;
    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}