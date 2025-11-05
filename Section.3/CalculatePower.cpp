//Calculate the power using recursion......
//Q36
#include<iostream>
using namespace std;
int CalculatePower(int n, int p){
    if(p==0){
        return 1;
    }
    int ans;
    ans=n*CalculatePower(n,p-1);
    return ans;
}
int main(){
    int n,p;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter the power : ";
    cin>>p;
    cout<<n<<"^"<<p<<": "<<CalculatePower(n,p);
    return 0;
}