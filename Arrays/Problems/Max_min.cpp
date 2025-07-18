// Problem: Take n numbers from the user Store them in an array Find and print the maximum and minimum numbers
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" enter the numbers of elements : ";
    cin>>n;
    int arr[100];
    cout<<" enter"<< n <<" numbers "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxNUM=arr[0];
    int minNum=arr[0];
    
    for(int i=0;i<n;i++){
        if(arr[i]> maxNUM){
            maxNUM=arr[i];
        }
        if(arr[i]<minNum){
            minNum=arr[i];
        }
    }
        cout<< " MAX NUMBER IS : "<<maxNUM<<endl;
        cout<<" MINIMUM NUMBER IS "<<minNum<<endl;

    
    return 0;
}