#include<iostream>
using namespace std;
void  max(int a,int b,int c){
    if(a>=b && a>=c){
        cout<<" the maximum number is : "<<a<<endl;
    }
    else if (b>=a && b>=c){
        cout<<" the maximum number is : "<<b<<endl;
    }
    else{
         cout<<" the maximum number is : "<<c<<endl;
    }
}
int main(){
    int a,b,c;
    cout<<" enter 3 numbers : ";
    cin >> a>>b>>c;
    max(a,b,c);
    return 0;

}