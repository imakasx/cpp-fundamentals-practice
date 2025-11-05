//Largest element in array.....
//Q41
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
    int maxN=INT_MIN;
    for(int i=0; i<n; i++){
        if(array[i]>maxN){
            maxN=array[i];
        }
    }
    cout<<"Largest No.: "<<maxN;

}