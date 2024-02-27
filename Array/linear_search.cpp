#include<iostream>
using namespace std;

int main(){
    int a[6]={2,8,16,25,32,89};

    bool flag=0; //Found=1 and Not Found=0


    int target;
    cout<<"Enter the Target: ";
    cin>>target;
    for (int i=0;i<6;i++){
        if (a[i]==target){
            flag=1;
            break;
        }
    }
    if (flag==1){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}