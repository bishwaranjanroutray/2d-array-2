// Write a program to print the matrix in wave form.
// Input :
// 1 2 3
// 4 5 6
// 7 8 9
// Output : 7 4 1 2 5 8 9 6 3

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
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=m-1;i>=0;i--){
                cout<<a1[i][j]<<" ";
            }
        }
        else{ 
        for(int i=0;i<m;i++){
            cout<<a1[i][j]<<" ";
        }
        } 
    }
}