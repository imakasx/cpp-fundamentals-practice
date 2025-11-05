//Swaping two number.......
//Q31
#include<iostream>
using namespace std;
int swapNumber(int a, int b){
    int temp=0;
    temp=a;
    a=b;
    b=temp;    
    cout<<"A:"<<a<<" "<<"B:"<<b<<endl;
    return 0;
}
int main(){
    int a,b;
    cout<<"Enter value A: ";
    cin>>a;
    cout<<"Enter Value B: ";
    cin>>b; 
    swapNumber(a,b);
    return 0;
}