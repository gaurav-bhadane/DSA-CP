#include<iostream>
using namespace std;

int main(){

    int arr[3][3]={
        {10,56,45},
        {78,152,156},
        {12,10,114}
    };

    int row=3,column=3;

    int target;
    cout<<"Enter the Target which you want to Search: ";
    cin>>target;

    bool flag=0;

    for (int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if (arr[i][j]==target){
                flag=1;
            }
        }
    }

    if (flag==1){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }

}