//check palindrome number.....
//Q18
#include<iostream>
using namespace std;
int main(){
    int n , original , reverse=0;
    cout<<"Enter the number :";
    cin>>n;

    original=n;

    while(n!=0){
        int number = n % 10;
        reverse = reverse*10 + number;
        n = n/10;
    }
    if(reverse == original){
        cout<<"Palindrome Number ";
    }else{
        cout<<" Not Palindrome Number";
    }
    return 0;
}