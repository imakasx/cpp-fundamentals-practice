#include <iostream> 
using namespace std; 

int main() { 
    string str; 
    cout << "Enter a string: "; 
    cin >> str;
    // getline(cin , str);
    // cin.ignore( );

    int length = 0; 
    for (char c : str) { 
        length++; 
    } 

    cout << "Length of the string: " << length << endl; 
    return 0; 
} 