// print N-1 using Recurssion

#include<iostream>
using namespace std;
void printnumbers(int n){
    if(n==0) return;
    printnumbers(n-1);
    cout<<n<<" ";
}
int main(){
    int n=10;
    printnumbers(n);
    return 0;
}

