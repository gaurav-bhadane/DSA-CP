#include<iostream>
#include<limits.h>
using namespace std;


int main(){

    int a[5][5]={
        {10,20,30,40,50},
        {60,70,80,90,100},
        {110,120,260,140,150},
        {160,170,180,190,200},
        {210,220,230,240,250}
    };

    int maxm=INT32_MIN;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if (a[i][j]>maxm){
                maxm=a[i][j];
            }
        }
    }

    cout<<"Maximum Number is: "<<maxm;

}