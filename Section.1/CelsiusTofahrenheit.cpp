//convert celsius to fahrenheit....
//Q8
#include<iostream>
using namespace std;
int main(){
    //temperature = (celsius * 9/5)+32
    float cel;
    cout<<"Enter the temperature in celsius :";
    cin>>cel;
    float fahren = (cel*9/5)+32;
    cout<<"Temperature in fahrenheit :"<<fahren;
    return 0;
}