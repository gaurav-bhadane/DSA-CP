#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string name;
    cout<<"Enter the String: ";
    cin>>name;
    // cout<<"Length: "<<name.length()<<endl;
    // cout<<"Empty: "<<name.empty()<<endl;
    // cout<<"Position Value: "<<name.at(0)<<endl;
    // cout<<"Front Character: "<<name.front()<<endl;
    // cout<<"Back Character: "<<name.back()<<endl;
    // name.append(" Bhadane");
    // cout<<"Name after Appending: "<<name<<endl;

    // cout<<name.erase(3,11);

    // cout<<name.insert(2,"ur")<<endl;

    // name.push_back('v');
    // name.pop_back();
    // cout<<name<<endl;

    string str1="Hey bro How are you";
    // string str2="naman";
    // if (str1.find(str2)==string::npos){
    //     cout<<"Not Found";
    // }
    // else{
    //     cout<<"Found";
    // }

    // if(str1.compare(str2)==0){
    //     cout<<"Matching";
    // }
    // else{
    //     cout<<"Not Matching";
    // }

    string sub=str1.substr(4,3);
    cout<<"Substring is: "<<sub;



    return 0;
}