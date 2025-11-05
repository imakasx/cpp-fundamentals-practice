//two number of LCM.....
//Q21
#include<iostream>
using namespace std;
int main(){
    int a,b,p,q,lcm;
    cout<<"Enter the A and B :";
    cin>>a>>b;
    p = a;
    q = b;

    while(b!=0){
        int i = b;
        b = a % b;
        a = i;
    }

    lcm = (p*q)/a;      //lcm(a,b)=(a*b)/gcd(a,b)
    cout<<"LCM is :"<<lcm;
    return 0;
}