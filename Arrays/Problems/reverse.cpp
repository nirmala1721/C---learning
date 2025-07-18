// reverse in arrays 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter the numbers : ";
    cin>>n;
    int arr[100];
    cout<<" enter "<<n<<" numbers : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<" reversed array : ";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}