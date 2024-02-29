#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int arr[3][3]={
        {10,56,45},
        {78,152,156},
        {12,110,1104}
    };

    int row=3,column=3;

    for (int i=0;i<row;i++){
        int ans=0;
        for(int j=0;j<column;j++){
            ans+=arr[i][j];
        }
        cout<<"Sum of Row "<<i+1<<" is: "<<ans;
        cout<<endl;
    }


}