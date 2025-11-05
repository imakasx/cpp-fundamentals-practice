//check a number is perfect or not
//Q26
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number :";
    cin>>n;
    
    for(int i=1; i<n; i++){
        if(n%i == 0){
            sum = i+sum;
        }
    }
    if(sum == n){
        cout<<"Perfect number :"<<sum;
    }else {
    cout<<" Not perfect number";
    }
    return 0;
}