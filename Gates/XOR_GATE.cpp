#include<iostream>
using namespace std;

int main(){
    int a[4]= {0,0,1,1};
    int b[4]= {0,1,0,1};

    for (int i=0;i<4;i++)
    {
        int c= a[i]^b[i];
        cout<<a[i]<<" xor "<<b[i]<<" : "<<c<<endl;
    }

}