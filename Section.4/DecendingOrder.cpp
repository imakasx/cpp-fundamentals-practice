//decending order usign bubble sort.....
//Q48
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int count=1;
    while (count<n){
        for(int i=0; i<n-count; i++){
            if(arr[i]<arr[i+1]){
                int temp = arr[i+1];
                arr[i+1]= arr[i];
                arr[i]=temp;
            }
        }
        count++;
    }
    cout<<"Decending order; ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}