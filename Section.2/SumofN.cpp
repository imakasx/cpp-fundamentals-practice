//find N number of sum....using 'for'loop...
//Q13
#include<iostream>
using namespace std;
int main(){
    int n,sum = 0;
    cout<<"Enter the N number :";
    cin>>n;

    for(int i=1; i<=n; i++){
        sum += i;           //sum=sum+i
    }
    cout<<"sum is :"<<sum;
    return 0;
}