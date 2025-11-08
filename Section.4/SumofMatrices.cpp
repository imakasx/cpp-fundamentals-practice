//sum of matrices.....
//Q49
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the range: ";
    cin>>m>>n;
    int mat1[m][n],mat2[m][n],sum[m][n];
    cout<<"Enter element mat1: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter element mat2: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>mat2[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
        sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    cout<<"sum is: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}