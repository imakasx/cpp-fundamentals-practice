//check a number Even or Odd....
//Q10
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    if(num>0){
        cout<<"This no. is positive";
    }else if(num<0){
        cout<<"This no. is negative";
    }else{
        cout<<"zero";
    }
    return 0;
}