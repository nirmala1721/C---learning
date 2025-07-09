#include<iostream>
using namespace std;
int main(){
    int marks;
    bool average;
    cout<<" marks : ";
    cin>>marks;
    cout<<" average : ";
    cin>>average;
   if (average==true){
    if (marks>=95){
        cout<<" Grade A ";
    }
    else if (marks>=75){
        cout<<" Grade B ";
    }
    else if (marks>=60){
        cout<<" Grade c ";
    }
    else if (marks>=35){
        cout<<" Grade D ";
    }
}
   else{
    cout<<"fail";
   }
return 0;
}