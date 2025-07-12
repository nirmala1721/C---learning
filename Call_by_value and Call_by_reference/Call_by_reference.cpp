#include<iostream>
using namespace std;
void modify( int &x){
    x=x+10;
    cout<<" Inside value is : "<<x<<endl;
}
int main(){
    int a=6;
    modify(a);
    cout<<" orginal value : "<<a<<endl;
return 0;
}