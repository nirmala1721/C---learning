// Fibonacci series
#include<iostream>
using namespace std;
int fibonnaci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonnaci(n-1)+fibonnaci(n-2);
}
int main(){
    int n;
    cout<<" ENTER position : ";
    cin>>n;
    int result=fibonnaci(n);
    cout<<" fibonnaci series "<<n<< " is "<<result<<endl;
    return 0;
}