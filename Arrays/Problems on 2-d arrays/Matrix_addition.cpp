// # matrix addition
#include<iostream>
using namespace std;
int main(){
    int rows,col;
    cout<<"  Enter Number of rows and columns : ";
    cin>>rows>>col;
    int A[100][100],B[100][100],sum[100][100];
    cout<<" enter elements of matrix A : ";
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>>A[i][j];
        }
    }
    cout<<" Enter Elements of matrix B : ";
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>>B[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            sum[i][j]=A[i][j]+B[i][j];
        }
    }
    cout<<" Addition of 2  matrix (A+B) is  ";
    for(int i=0;i<rows;i++){
        for (int j=0;j<col;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}