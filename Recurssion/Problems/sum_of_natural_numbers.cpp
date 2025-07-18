// sum of natural numbers

#include<iostream>
using namespace std;
int sum(int n){
    if(n==1) return 1;
    return(n)+sum(n-1);

}
int main(){
    int n;
    cout<<" Enter a sum of Natural Number : ";
    cin>>n;
    int result=sum(n);
    cout<<"  sum of Natural numbers are  : "<<n<<" is "<<result<<endl;
    return 0;
}