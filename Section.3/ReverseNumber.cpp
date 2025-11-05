//reverse number...... 
//Q37
#include<iostream>
using namespace std;
int reverse(int num){
    int rev=0;
    while(num>0){
        int n=num%10;
        rev =rev*10+n;
        num=num/10;
    }
    return rev;

}
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<"Reverse Number : "<<reverse(n)<<endl;
    return 0;
}