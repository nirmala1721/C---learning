#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p=&a;
    cout<<" Value of a : "<<a<<endl;
    cout<<" Adress of a : "<<&a<<endl;
    cout<<" Value of p (address it holds) : "<<p<<endl;
    cout<< " Value at address stored in p: " << *p << endl;
     *p = 20; 
     cout << "New value of a: " << a << endl;  
return 0;

}