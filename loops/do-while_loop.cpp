//  Do-while loop
//     - Executes the loop body at least once before checking the condition.
//     - Useful when you want the code to run at least once.
//     Syntax:
//     do {
//          // code to execute
//     } while (condition);

#include<iostream>
using namespace std;
int main(){
    int i=1;
    do{
      cout<<" number "<<i<<endl;
      i++;
    }
    while(i<=5);
return 0;
}