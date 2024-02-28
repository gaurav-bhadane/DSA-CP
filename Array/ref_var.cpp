#include<iostream>
using namespace std;

int main(){
    int a=10; //normal integer variable
    int &k=a;  //reference variable of a  //nick name of a
    int &n=a; //reference variable of n //nick name of a
    cout<<"a: "<<a<<" ,k: "<<k<<" ,n: "<<n<<endl;


    k++;
    cout<<"After Incrementing k Following are the results for a and n: "<<endl;
    cout<<"a: "<<a<<" ,k: "<<k<<" ,n: "<<n;

    return 0;
}