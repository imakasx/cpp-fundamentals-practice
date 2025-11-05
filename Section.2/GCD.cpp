//Greatest Common Divisor(GCD)....-HCF
//Q20
#include<iostream>
using namespace std;
int main(){
    int a ,b;
    cout<<"Enter two nummber :";
    cin>>a>>b;

    while(b != 0){
        int i = b;
        b = a % b;
        a = i;
    }

    cout<<"GCD is :"<<a;
    return 0;
}