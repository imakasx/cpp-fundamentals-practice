//Count the digits......
//Q38
#include<iostream>
using namespace std;
int CountDigits(int n){
    if(n<10 && n >-10){
        return 1;
    }
    return 1 + CountDigits(n / 10);
}
int main(){
    int digit;
    cout<<"Enter the Digit: ";
    cin>>digit;
    cout<<"Total Digits: "<<CountDigits(digit);
    return 0;
}