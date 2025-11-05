//Find largest number....using conditional statement if/else...
//Q11
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the three number :";
    cin>>a>>b>>c;
    
    if(a>=b && a>=c){
        cout<<"largest number is :"<<a;
    }else if(b>=a && b>=c){
        cout<<"largest number is :"<<b;
    }else{
        cout<<"largest number is :"<<c;
    }
    return 0;
}