//Reverse number....
//Q16
#include<iostream>
using namespace std;
int main(){
    int n , rev=0;
    cout<<"Enter the number :";
    cin>>n;

    while (n!=0){
        int number = n % 10;     //last number=reminder
        rev = rev*10 + number;  
        n = n/10;        //reset last number 

    }
    cout<<"Reverse number is :"<<rev;
    return 0;
}