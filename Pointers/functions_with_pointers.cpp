#include<iostream>
using namespace std;

void solve(int arr[],int n){
    // cout<<"Size of an array inside Function: "<<sizeof(arr)<<endl;
    // cout<<"Address of an array inside Function: "<<&arr<<endl;
    *arr=*arr+1;
}


int main()
{
    int arr[5]={10,20,30,40,50};
    // cout<<"size of an array: "<<sizeof(arr)<<endl;
    // cout<<"Address of an array: "<<arr<<endl;
    solve(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}