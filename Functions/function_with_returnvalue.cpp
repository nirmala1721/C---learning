#include<iostream>
using namespace std;
int multiply(int x,int y){ // Function with parameters and return value
    return x*y;// returns the product
}
int main(){
    int result=multiply(8,5);
    cout<<" multiplication : "<<result<<endl;
    return 0;

}