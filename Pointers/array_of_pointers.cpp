#include<iostream>
using namespace std;

int main()
{
    int arr[5]={10,20,30,40,50};
    int *nums[5];
    for(int i=0;i<5;i++){
        nums[i]=&arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<*nums[i]<<" ";
    }
    return 0;
}