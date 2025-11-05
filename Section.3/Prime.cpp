//prime number....
//Q34
#include<iostream>
using namespace std;
bool isPrime(int i, int div){
    if(i<=1){
        return false;
    }
    if(i==div){
        return true;
    }
    if(i % div==0){
        return false;
    }

    return isPrime(i , div+1);
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    if (isPrime (n , 2)){
        cout<<"Prime";
    }else{
    cout<<"Not Prime";
    }
    return 0;
}