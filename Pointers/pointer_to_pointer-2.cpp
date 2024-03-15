#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int *p=&n;
    int **q=&p;
    int ***r=&q;

    cout<<"Values of n through various Methods: "<<endl;
    cout<<"n: "<<n<<endl;
    cout<<"*p: "<<*p<<endl;
    cout<<"**q: "<<**q<<endl;
    cout<<"***r: "<<***r<<endl;
}