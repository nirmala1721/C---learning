// Factorial of a Number
#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);

}
int main(){
    int n;
    cout<<" factorial number : ";
    cin>>n;
    int result = factorial(n);
    cout<<"factorial of "<<n<<" is "<<result<<endl;
    return 0;
}