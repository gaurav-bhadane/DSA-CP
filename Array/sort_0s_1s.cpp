#include<iostream>
using namespace std;

int main()
{
    int arr[9]={0,1,0,1,1,0,0,0,0};
    int n=9;

    int zero=0;
    int one=0;

    for (int j=0;j<n;j++){
        if (arr[j]==0){
            zero++;
        }
        else{
            one++;
        }
    }

    //1st Approach

    for(int i=0;i<zero;i++){
        arr[i]=0;
    }
    for(int i=zero;i<n;i++){
        arr[i]=1;
    }

    //2nd Approach

    // int i=0;

    // while(zero--){
    //     arr[i]=0;
    //     i++;
    // }

    // while(one--){
    //     arr[i]=1;
    //     i++;
    // }

    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }

    return 0;
}