//Factorial.....
//Q15
#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"Enter N Number :";
    cin>>n;

    for(int i=1; i<=n; i++){
    fact *= i;          //fact= fact*i
    }
    cout<<"Factorial of :"<<n<<" = "<<fact;
}