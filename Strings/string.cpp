#include<iostream>
#include<string>
using namespace std;
int main(){
    string name=" Nirmala";
    cout<< " Name : "<<name<<endl;
    cout<< " Length :"<<name.length()<<endl;

    name=+"Bigimalla";
    cout<<" After Append : "<<name<<endl;

    cout<<" substring (0,7) : "<<name.substr(0,7)<<endl;

    int pos=name.find("bigi");
    cout<<" Postion of bigi : "<<pos<<endl;

    name.replace(0,7,"Ni");
    cout<<" After replace : "<<name<<endl;

    name.clear();
    cout<<" after clear is empty ?? "<<(name.empty () ? "yes" : "no")<<endl;

    return 0;
}