//Smallest element in array.....
//Q42
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array of size: ";
    cin>>n;
    int array[n];
    cout<<"Enter the array element: ";
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    int minN=INT_MAX;
    for(int i=0; i<n; i++){
        if(array[i]<minN){
            minN=array[i];
        }
    }
    cout<<"Smallest No.: "<<minN;
}