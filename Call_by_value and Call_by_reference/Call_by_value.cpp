#include<iostream>
using namespace std;
void modifying(int x){
    x=x+10;
    cout<<" Inside the function  : "<<x<<endl;
}
int main(){
    int a=5;
    modifying(a);
    cout<<" orginal value : "<<a<<endl;
    return 0;
}