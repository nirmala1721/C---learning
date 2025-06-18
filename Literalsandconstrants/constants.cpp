// 1. constants: constants are where we cant change the value once it is defined we cannt change it it is a fixed value cannot be changed during execution of a program
// 2. once declared it will be same value throught the program
// 3. types of constants are
//  a.integer constant b.float constant c. charachter constant d.string constant e. Boolean constant

//   a.Integer constant
//     Whole numbers without decimal
//     const int age = 25;
//     age = 30; // ❌ Error! Can't change a const value

//   b.Float constant
//   	Numbers with decimal points
//     #define PI 3.14159
//     Note: No =, no data type, and this works like a find-replace before compilation.

//   c.charachter constant
//     A single character enclosed in single quotes examples: 'A', '9', '#'

//   d. String Constant
//     Sequence of characters inside double quotes example: "Hello", "123"

//   e. Boolean Constant
//     Logical values representing truth example:true, false  

#include<iostream>
using namespace std;
#define pi 3.14159
int main(){
 const int week_day_calender=7;
 float radius=5;
 float  area=pi*radius*radius;
 cout<<"area of circle:"<<area<<endl;
 cout<<"days in a week :"<<week_day_calender<<endl;

 return 0;

}