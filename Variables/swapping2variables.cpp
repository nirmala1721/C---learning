//swapping 2 variables in c++ 
#include<iostream>
using namespace std;
int main()
{
  int temp,a,b;
  cout<<"enter two  numbers ";
  cin>>a>>b;
  temp=a;
  a=b;
  b=temp;
  cout<<"after swapping variables" <<endl;
  cout<<"a is :"<<a<<endl;
  cout<<"b is :"<<b<<endl;
  return 0;


}
    