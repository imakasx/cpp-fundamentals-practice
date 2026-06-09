#include <iostream> 
#include <cctype> 
#include <string>
using namespace std; 
 
int main() { 
    string str; 
    cout << "Enter a string: "; 
    cin >> str; 
 
    for (char &c : str) { 
        c = toupper(c); 
    } 
 
    cout << "Uppercase string: " << str << endl; 
    return 0; 
} 