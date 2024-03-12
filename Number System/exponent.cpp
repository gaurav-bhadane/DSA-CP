#include<iostream>
using namespace std;

int fast_exponent(int a,int b){
    //Time Complexity O(log b);
    int ans=1;
    while(b>0){
        if (b&1==1){
            ans=ans*a;
        }
        a=a*a;
        b=b/2;
    }
    return ans;
}

int slow_exponent(int a,int b){
    //Time Complexity O(b);
    int ans=1;
    for (int i=0;i<b;i++){
        ans=ans*a;
    }
    return ans;
}

int main(){

    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Answer: "<<fast_exponent(a,b);
    return 0;
}