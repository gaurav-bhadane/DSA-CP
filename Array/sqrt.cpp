#include<iostream>
using namespace std;

int squareRoot(int x){
    int s=0;
    int e=x;
    while(s<=e){
        int mid=(s+e)/2;
        if (mid*mid==x){
            return mid;
        }
        else if (mid*mid>x){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return e;
}

int main(){
    int x;
    x=9;
    cout<<"Square Root of "<<x<<" is: "<<squareRoot(x);
}