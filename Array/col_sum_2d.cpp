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

    for (int i=0;i<column;i++){
        int ans=0;
        for(int j=0;j<row;j++){
            ans+=arr[j][i];
        }
        cout<<"Sum of Column "<<i+1<<" is: "<<ans;
        cout<<endl;
    }


}