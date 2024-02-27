#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool isFound (int arr[],int size,int target){
    for (int i=0;i<size;i++){
        if (arr[i]==target){
            //found
            return true;
        }
    }
    //Not Found
    return false;
}



int main(){
    int arr[8]={25,36,48,61,89,100,125,155};
    int size=8;
    printArray(arr,size);

    cout<<isFound(arr,size,61);
    return 0;
}