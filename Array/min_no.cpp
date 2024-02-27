#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int a[7]={24,15,2,14,23,89,15};
    int min=INT_MAX;
    for (int i=0;i<7;i++){
        if (a[i]<min){
            min=a[i];
        }
    }
    cout<<"Minimum No. is: "<<min<<endl;

    return 0;
}