//use and create variable....
//Q4
#include<iostream>
using namespace std;
int main(){
    int a,b,temp;       //with 3rd variable
    cout<<"Enter the two number A and B :";
    cin>>a>>b;
    temp = a;       //value transfer the another space... 
    a = b;
    b = temp;
    cout<<"After swap A ="<<a<<" & "<<"B ="<<b;
    return 0;
}