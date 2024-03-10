#include<iostream>
#include<string.h>
using namespace std;

bool isPalindrome(char ch[]){
    int start=0,end=strlen(ch)-1;
    while(start<=end){
        if (ch[start]==ch[end]){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main()
{
    char ch[100];
    cout<<"Enter the String: ";
    cin.getline(ch,100);
    if(isPalindrome(ch)){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    
    
    return 0;
}