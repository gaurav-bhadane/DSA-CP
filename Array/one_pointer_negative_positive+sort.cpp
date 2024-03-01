#include<iostream>
using namespace std;

int main(){

    int arr[11]={23,-7,12,-10,50,-11,40,60,70,-45,-56};

    int j=0;

    for (int i=0;i<11;i++){
        if (arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    for(int i=0;i<11;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}