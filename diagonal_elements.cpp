// Write a program to print the elements of both the diagonals in a square matrix.
#include<iostream>
using namespace std;

int main(){
    cout<<"enter the row and column of the matrix:";
    int m,n;
    cin>>m>>n;
    int a1[m][n];
    cout<<"enter the elements of the matrix:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a1[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i+j == n-1 || j==i) cout<<a1[i][j];
            else cout<<" ";
        }
        cout<<endl;
    }
}