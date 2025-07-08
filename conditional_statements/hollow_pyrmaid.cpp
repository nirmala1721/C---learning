#include<iostream>
using namespace std;
int main (){
    int rows;
    cout<<" Enter required Rows : ";
    cin>>rows;
    for (int i=1;i<=rows;i++){
        for(int s=1;s<=rows-i;s++){
            cout<<" ";
        }
    for (int j=1;j<=(2*i-1);j++){
        if(j==1||j==(2*i-1)){
            cout<< "*";

        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
return 0;
}

