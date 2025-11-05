//calculate power of a number.......
//Q17
#include<iostream>
using namespace std;
int main(){
    int n , p , result = 1;
    cout <<"Enter base and power :";
    cin>>n>>p;

    for(int i = 1; i<=p; i++){
        result *=n;
    }
    cout<<"answer is :"<<result;
    return 0;
}