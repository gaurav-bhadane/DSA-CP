// 2 Pointer Approach

#include<iostream>
using namespace std;

int main(){
    int a[7]={23,-7,12,-10,-11,40,60};
    int j=0;
    for(int i=0;i<7;i++){
        if (a[i]<0){
            swap(a[i],a[j]);
            j++;
        }
    }
    
    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
}