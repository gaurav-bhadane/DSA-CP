//Replace @ with ' ' (Space)

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char ch[100];
    cout<<"Enter the String: ";
    cin.getline(ch,100);

    int i=0;
    while(ch[i]!='\0'){
        if (ch[i]=='@'){
            ch[i]=' ';
        }
        i++;
    }
    cout<<ch;

    return 0;
}