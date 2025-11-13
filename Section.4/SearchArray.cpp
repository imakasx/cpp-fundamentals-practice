//search array.... 
//Q52
#include<iostream>
using namespace std;
int main(){
    int n,s; 
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to search for: ";
    cin>>s;
    int num=-1;
    for(int i=0; i<n; i++){
        if(arr[i]==s){
            num=i;
            break;
        }
    }
    if(num!=-1){
        cout<<"Array found at index: "<<num;
    }else{
        cout<<"Array not found !";
    }
    return 0;
}