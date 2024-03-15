#include<iostream>
using namespace std;

void solve(int* &p){
    p=p+1;
}

int main()
{

    int n=5;
    int *p=&n;
    cout<<"p: "<<p<<endl;
    cout<<"&p: "<<&p<<endl;
    cout<<"*p: "<<*p<<endl;

    solve(p);
    cout<<"p: "<<p<<endl;
    cout<<"&p: "<<&p<<endl;
    cout<<"*p: "<<*p<<endl;

    return 0;
}