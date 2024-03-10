#include<iostream>
#include<string.h>
using namespace std;

int findLength(char ch[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if (ch[i]=='\0'){
            break;
        }else{
            count++;
        }
    }
    return count;
}

int main(){

    char ch[100];
    cout<<"Enter the Character: ";
    cin>>ch;

    cout<<"Length of String in ch is: "<<findLength(ch,100)<<endl;
    cout<<"Length of String using Strlen Function: "<<strlen(ch);

    return 0;
}