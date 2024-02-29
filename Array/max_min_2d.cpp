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

    int min=INT_MAX;
    int max=INT_MIN;

    for (int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if (arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }

    for (int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if (max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }

    cout<<"Minimum Value is: "<<min<<endl;
    cout<<"Maximum Value is: "<<max;


}