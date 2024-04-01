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
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<fact(6);
    return 0;
}