//transposh matrix......
//Q50
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rang: ";
    cin>>m>>n;
    int orimat[m][n],transposh[m][n];
    cout<<"Enter matrix: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>orimat[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            transposh[j][i]=orimat[i][j];
        }
    }
    cout<<"Transposh matrix: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<transposh[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}