//calculate interest...
//Q6
#include<iostream>
using namespace std;
int main(){
    //interest = P*R*T
    float P,R,T;  //float value
    cout<<"Enter the principle, rate and time : ";
    cin>>P>>R>>T;
    float CI = P*R*T/100;
    cout<<"Interest is :"<<CI;
    return 0;
}