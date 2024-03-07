#include<iostream>
using namespace std;

int main(){

    int a[]={25,84,17,3,20};
    int n=5;
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if (a[min]>a[j]){
                min=j;
            }
        }
        swap(a[min],a[i]);
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}