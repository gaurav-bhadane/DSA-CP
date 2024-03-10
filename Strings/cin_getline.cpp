#include<iostream>
using namespace std;


int main(){

    char ch[6];
    cout<<"Enter the Character: ";
    //cin>>ch;
    cin.getline(ch,25);
    cout<<ch;
    return 0;
}