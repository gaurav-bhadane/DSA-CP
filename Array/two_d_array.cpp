#include<iostream>
using namespace std;

int main(){

    int a[3][4]={
        {25,24,1,2},
        {89,4,63,1},
        {7,100,255,123}
    };
    int row=3,column=4;
    
    cout<<"Printing Row Wise"<<endl;

    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Printing Column Wise"<<endl;

    for (int i=0;i<column;i++){
        for (int j=0;j<row;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}