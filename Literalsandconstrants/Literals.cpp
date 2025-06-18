// 1.IN c++ literals are fixed values directly written in code it represents a constant value used in a program and it is not store in any variable until it is assigned 
// 2. types of literals are a.integer literal b. string literal c. floating point literal d. charachter literal e.boolean literal f. null point literal 
//  a. Integer literal
//  Whole numbers without a decimal point.
//  int a = 100; // 100 is an integer literal

//  b. string literal
//  A sequence of characters enclosed in double quotes " ".
//  string s = "Hello"; // "Hello" is a string literal

//  c. Floating point literal
//  Numbers with a decimal point or in exponential form.
//  float b = 3.14; // 3.14 is a float literal

//  d. charachter literal
//  A single character enclosed in single quotes ' '.
//  char c = 'A'; // 'A' is a character literal

//  e. Boolean Literal
//  Represent truth values: true or false.
//  bool flag = true; // true is a boolean literal

//  f.Null Pointer Literal (C++11 and above)
//  nullptr is used to represent a null pointer.
//  int* ptr = nullptr; // nullptr is a null pointer literal

#include<iostream>
using namespace std;
int main()
{
int age=21;
string name="Nirmala";
char grade='a';
bool exam_results="true";
float marks=99.9;

cout << "Her name is" << endl << name << endl << "her age is"<< endl<< age <<"she got exam results and  she passed exam with"<<endl<< marks <<"she got"<<endl<< grade <<"grade"<<"and that marks are true " << endl << exam_results;

return 0;

}