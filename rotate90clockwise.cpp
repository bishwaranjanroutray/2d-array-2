#include<iostream>
using namespace std;

int main(){
    cout<<"enter the row and column of the matrix:";
    int m,n;
    cin>>m>>n;
    int a1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a1[i][j];
        }
    }
    
    cout<<endl;
    // transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(a1[i][j],a1[j][i]);
            
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a1[i][j]<<" ";
           
        }
        cout<<endl;
    }
    cout<<endl;
    // rotation
    for(int c=0;c<n;c++){
        int i=0;
        int j=m-1;
        while(i<j){
            swap(a1[i][c],a1[j][c]);
            i++;
            j--;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a1[i][j]<<" ";
           
        }
        cout<<endl;
    }
}