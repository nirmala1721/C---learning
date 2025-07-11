// 1. A function is a block of code designed to perform a specific task.
// 2. Think of a function like a machine: you provide input, it processes that input, and then returns an output.
// 3. Functions help break a large program into smaller, manageable parts, making the code easier to understand.
// 4. Function code can be reused throughout your program, reducing repetition.
// 5. Using functions makes your code cleaner, more readable, and easier to maintain.
// 6. C++ provides many built-in functions, such as:
//     - sqrt() for square roots
//     - pow() for powers
//     - cin and cout for input and output
// 7. You can also create your own functions, known as user-defined functions.
// 8. Basic syntax for defining a function:
//     return_type function_name(parameters) {
//          // function body
//     }

#include<iostream>
using namespace std;
void first(){  //function defination
    cout<<"hello this is function first program";
}
int main(){
    first();//function call
    return 0;


}