// Transpose
#include<iostream>
using namespace std;
int main(){
    int rows,col;
    cout<<" Enter rows : ";
    cin>> rows;
    cout<<" Enter columns : ";
    cin>> col;
    int A[100][100],T[100][100];
    cout<<" Enter Elements of A : ";
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            T[j][i]=A[i][j];
        }

    }
    cout<<" transpose of matrix is "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<T[i][j]<<" ";
        }
    cout<<endl;
    }

return 0;

}