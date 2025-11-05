//Sum of Array Elements....
//Q43
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter of array size: ";
    cin>>n;
    int array[n];
    cout<<"Enter of Array elements: ";
    int ans=0;
    for(int i=0; i<n; i++){
        cin>>array[i];
        ans+=array[i];
    }
    cout<<"Sum of array: "<<ans;
}