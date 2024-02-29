#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int arr[3][3]={
        {10,56,45},
        {78,152,156},
        {12,110,1104}
    };

    int row=3,column=3,ans=0,ans2=0;

    for (int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(i==j){
                ans+=arr[i][j];
            }
        }
    }
    int i=0;
    while(row--){
        ans2+=arr[i][column-1];
        i++;
        column--;
    }

    cout<<"Sum of First Diagonal: "<<" is: "<<ans<<endl;
    cout<<"Sum of Second Diagonal: "<<" is: "<<ans2<<endl;


}