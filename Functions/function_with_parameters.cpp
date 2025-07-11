// Functions can accept parameters, which are placeholders for the values you pass in. This allows the function to work with different inputs.
//     Example:
//     void greet(string name) {
//          cout << "Hello, " << name << "!" << endl;
//     }
//     - Here, name is a parameter of type string.
//     - You can call the function with an actual value:
//       greet("Nirmala");
// Types of parameters:
//      a. Formal Parameters: Declared in the function definition (e.g., string name).
//      b. Actual Parameters (Arguments): The real values passed to the function when calling it (e.g., "Nirmala").


#include<iostream>
using namespace std;
void add(int a,int b){ //function with parameters
    cout<<" sum is : "<<a+b<<endl;

}
int main(){
    add(3,4); //function call with values 
    return 0;
}
