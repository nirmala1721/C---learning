#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<" Marks you have got ";
    cin>>marks;
    if (marks>=95){
        cout<<"Grade A";

    }
    else if (marks>=75){
        cout<<"grade B";
    }
    else if(marks>=50){
        cout<<"grade c";
    }
    else if(marks>=35){
        cout<<"grade d";
    }
    else{
        cout<<"Fail";
    }
   
return 0;
}