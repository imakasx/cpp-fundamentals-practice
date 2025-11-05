//Print inverted pyramid.....
//Q29
#include<iostream>
using namespace std;
int main(){
        for(int i = 1; i<=5; i++){ 
            for(int z=1; z<=i; z++){
                cout<<" ";
            }       
            for(int j=1; j<=6-i; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    return 0;
}
//using numbers....
// int main(){
//         for(int i=1; i<=5; i++){
//             for(int j=1; j<=6-i; j++){
//                 cout<<j;
//             }
//             cout<<endl;
//         }
//     return 0;
// }