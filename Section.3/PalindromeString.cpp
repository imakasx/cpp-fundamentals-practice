//palindrome string........
//Q39
#include<iostream>
using namespace std;
bool palinString(string s,int i, int j){
    if(i==j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    return palinString(s,i+1,j-1);
}
int main(){
    string s;
    cout<<"Enter the Stirng : ";
    cin>>s;
    if(palinString(s, 0 ,s.length()-1)){
        cout<<"Palindrome string !!";
    }else{
        cout<<"Not Palindrome string !!";
    }
    return 0;
}