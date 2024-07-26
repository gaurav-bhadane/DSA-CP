#include<iostream>
using namespace std;

int main(){
    int a=10; //normal integer variable
    int &k=a;  //reference variable of a  //nick name of a
    int &n=a; //reference variable of a //nick name of a
    cout<<"a: "<<a<<" ,k: "<<k<<" ,n: "<<n<<endl;


    k++;
    cout<<"After Incrementing k Following are the results for a,k and n: "<<endl;
    cout<<"a: "<<a<<" ,k: "<<k<<" ,n: "<<n<<endl;

    cout<<"After Incrementing k Following are the Addresses for a,k and n: "<<endl;
    cout<<"a: "<<&a<<" ,k: "<<&k<<" ,n: "<<&n;

    // Conclusion: We can conclude that no seperate copies of a are not created just the variables k and n are referencing it
    return 0;
}