//armstrog number.....
//Q35
#include<iostream>
#include<math.h>
using namespace std;
void armStrong(int num){
    int val=num;
    int arm=0;
    while(num>0){
        int temp=num%10;
        arm=arm+ pow(temp,3);
        // arm=arm+temp*temp*temp;
        num=num/10;
    }if(arm==val){
    cout<<"armstrong number!!"<<endl;   
    }else{
        cout<<"Not armstrong number!!"<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    armStrong(n);
    return 0;
}