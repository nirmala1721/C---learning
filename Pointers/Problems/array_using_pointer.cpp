// Arrays using pointer
// In C++, the name of an array acts as a pointer to its first element. For example, in the declaration `int arr[5] = {10, 20, 30, 40, 50};`, `arr` refers to both the array and a pointer to its first element, which is `&arr[0]`. Using `*arr` gives the value of the first element, which is 10.
#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int *p=arr;
    cout<<" Accessing array with pointer : "<<endl;
    for(int i=0;i<5;i++){
        cout<<" Element "<<i<<" = "<<*(p+i)<<endl;
    }
    return 0;

}

