//Find odd number in 1 to N..... using 'for'loops
//Q12
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the N value :";
    cin>>n;
    cout<<"odd number is: ";

    for(int i=1; i<=n; i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
    return 0;
}

// int main(){
//     int n;
//     cout<<"Enter the N value :";
//     cin>>n;
//     cout<<"odd number is: ";

//     for(int i=1; i<=n; i++){
//         if(i%2!=0){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }