#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Place the elements in the Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<"th element: ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}