#include<iostream>
using namespace std;

int main(){

    int arr[3][3]={
        {10,56,45},
        {78,152,156},
        {12,110,1104}
    };

    int row=3,column=3;

    for(int i=0;i<row;i++){
        for(int j=i;j<column;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    for (int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}