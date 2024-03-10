#include<iostream>
#include<string.h>
using namespace std;

void Upper(char ch[]){
    int i=0;
    while(ch[i]!='\0'){
        char currChar=ch[i];
        if (currChar>='a' && currChar<='z'){
            ch[i]=currChar-97+65;
        }
        i++;
    }
    cout<<ch;
}

void Lower(char ch[]){
    int i=0;
    while(ch[i]!='\0'){
        char currChar=ch[i];
        if (currChar>='A' && currChar<='Z'){
            ch[i]=currChar-65+97;
        }
        i++;
    }
    cout<<ch;
}

int main()
{
    char ch[100];
    cout<<"Enter the String: ";
    cin.getline(ch,100);
    Lower(ch);
    return 0;
}