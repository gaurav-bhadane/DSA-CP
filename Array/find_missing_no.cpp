#include<iostream>
using namespace std;

void missingNo(int a[],int n){

    
    for(int i=0;i<n;i++){
        int index=abs(a[i]);
        if (a[index-1]>0){
            a[index-1]*=-1;
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]>1){
            cout<<i+1<<" ";
        }
    }
}


int main()
{

    int a[5]={1,2,3,3,2};
    int n=5;

    missingNo(a,n);

    return 0;
}