// Continue statement
//     - Skips the current iteration and continues with the next one.
//     Example:
//     for (int i = 1; i <= 5; i++) {
//          if (i == 3) {
//               continue; // skips printing when i is 3
//          }
//          cout << i << endl;
//     }

#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        if(i==3){
            continue;
        }
        cout<<" NUMBERS "<<i<<endl;
    }
return 0;
}