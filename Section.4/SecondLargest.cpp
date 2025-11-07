//second largest number.....
//Q45
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int first= INT_MIN;     
    int second=INT_MIN; 
    for(int i=0; i<n; i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }else if(arr[i]>second && arr[i]!= first){
            second=arr[i];
        }
    }
    cout<<"Second largest no. "<<second;
}