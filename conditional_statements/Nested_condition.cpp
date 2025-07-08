#include<iostream>
using namespace std;
int main(){
    int marks;
    bool average;
    cout<<" your marks : ";
    cin>>marks;
    cout<<" average : ";
    cin >> average;
    if(marks>=25){
      if (average == true ){
        cout<<"passed the test";
      }
      else{
        cout<<"not passed";

    }
    }
    else{
    cout<<"fail";
   }
return 0;
}