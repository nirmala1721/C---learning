#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<" rows : ";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        for(int s=1;s<=rows-i;s++){
            cout<<" ";

        }
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
    }
return 0;
}