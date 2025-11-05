//calculate nCr......
//Q40   
#include<iostream>
using namespace std;
int fact(int num){
    int fact=1;
    for(int i=1; i<=num; i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int val, n,r;
    cin>>n>>r;
    val=fact(n)/(fact(r)*fact(n-r));
    cout<<val;
    return 0;
}