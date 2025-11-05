//factorial number..........
//Q32
#include<iostream>
using namespace std;
int factorial(int n){
    int ans;
    if(n==1){
        return 1;
    }

    ans=n*factorial(n-1);
    return ans;
}
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    cout<<factorial(n);
    return 0;
}