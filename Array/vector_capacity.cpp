#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> v;

    while (1){
        int d;
        cin>>d;
        v.push_back(d);
        cout<<"Capacity of v: "<<v.capacity()<<" Size is : "<<v.size()<<endl;

        //each time when the new element is added it checks whether the capacity is there? if there then place it otherwise INCREASE THE CAPACITY 2 TIMES
    }
}