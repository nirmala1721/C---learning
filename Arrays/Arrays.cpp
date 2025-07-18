// Arrays Basic problem
// problem Statement: Write a C++ program to: Take n numbers from the user Store them in an array Calculate and print the sum of all elements
// n = 5
// numbers = 2 4 6 8 10
// o/p : Sum = 30

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter the number  of elements : ";
    cin>>n;
    int arr[100];
    int sum=0;
    cout<<" enter the "<< n <<" numbers "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<" sum = "<<sum<<endl;
return 0;

}

