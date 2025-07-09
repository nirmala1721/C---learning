// Break statement
//     - Exits the loop immediately, even if the condition is still true.
//     Example:
//     for (int i = 1; i <= 5; i++) {
//          if (i == 3) {
//               break; // exits loop when i is 3
//          }
//          cout << i << endl;
//     }

#include<iostream>
using namespace std;
int main(){
    int i=1;
    while (i<=5){
        if(i==3){
            break;
        }
    cout<< " SET OF NUMBERS " <<i<<endl;
    i++;
    }
return 0;
}