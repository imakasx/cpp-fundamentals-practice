//maximum product subarray....
//Q51
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxP=arr[0];
    int minP=arr[0];
    int result=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<0){
            swap(maxP,minP);
        }
        maxP=max(arr[i],maxP*arr[i]);
        minP=min(arr[i],minP*arr[i]);
        result=max(result,maxP);
    }
    cout<<"Maximun Product is: "<<result<<endl;
    return 0; 
}