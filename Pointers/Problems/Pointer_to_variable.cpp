// Pointer to variable
//  Problem : Write a C++ program to: Declare an integer variable num and assign value 25 . Create a pointer ptr that points to num . Print the address of num.Print the value using the pointer . Change the value of num to 50 using the pointer . Print the updated value of num
#include<iostream>
#include<string>
using namespace std;
int main(){
int num=25;
int *p=&num;
cout<<" Adress of num  : "<<&num<<endl;
cout<<" value of a pointer :  "<<*p<<endl;
*p=50;
cout<<" updated value of num : "<<num<<endl;
return 0;


}