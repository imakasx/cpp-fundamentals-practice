//revrese array....
//Q44
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int S=0;    //Start
    int E=n-1;  //End
    while(S<E){
        swap(arr[S],arr[E]);
        S++;
        E--;
    }
    cout<<"Reverse array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//simple print..
// for(int i=n-1; i<0; i--){
//     cout<<arr[i];
// }