#include<iostream>
using namespace std;

int fact(int n){
    int count=1;
    if (n==1 || n==0){
        return 1;
    }
    count=n*fact(n-1);
    return count;
}

int main()
{
    cout<<fact(5);
    return 0;
}