// 1. A variable is a name given to a memory location where data can be stored. Its value can be changed during program execution.
// 2. Variables must be declared before use in C++.

// Rules for creating variables in C++:
// a. Variable names can consist of alphabets, digits, and underscores.
// b. Variable names must begin with an alphabet or an underscore.
// c. Variable names must not start with digits or any special characters.
// d. Reserved keywords cannot be used as variable names.
// e. Variable names are case-sensitive.

// The syntax for declaring a variable is: variable_type variable_name;

// Variables can be declared in several ways, for example:
// I.   int age;        // Declaration without initialization
// II.  int age(2);     // Constructor initialization
// III. int age{2};     // C++11 list initialization
// IV.  int age = 2;    // C-like initialization


#include<iostream>
using namespace std;
int main(){
    int age=21;
    cout<<"hey my age is" <<endl << age ;
    return 0;
}