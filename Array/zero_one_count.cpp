#include<iostream>
using namespace std;

int main(){
    int zero=0;
    int one=0;
    int arr[17]={1,1,0,1,1,1,1,0,0,1,0,1,0,1,0,0,0};
    for(int i=0;i<17;i++){
        if (arr[i]==0){
            zero++;
        }
        else{
            one++;
        }
    }
    cout<<"Total 0s in arr: "<<zero<<endl;
    cout<<"Total 1s in arr: "<<one<<endl;
}