#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool is_comp(int a,int b){
    return a>b;
}

int main()
{
    int a[]={25,84,17,3,20};
    int n=sizeof(a)/sizeof(int);

    sort(a,a+n,is_comp);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}