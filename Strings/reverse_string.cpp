#include<iostream>
#include<string.h>
using namespace std;

void reverseString(char ch[]){
    int start=0,end=strlen(ch)-1;
    while(start<=end){
        swap(ch[start],ch[end]);
        start++;
        end--;
    }
    cout<<ch<<endl;
}

int main(){

    char ch[100];
    cout<<"Enter the String or Character: ";
    cin>>ch;
    cout<<"The String after Reverse using function: ";
    reverseString(ch);
    // cout<<"The String after Reverse using strrev function: ";
    // cout<<strrev(ch)<<endl;

    return 0;
}