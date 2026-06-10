#include <iostream> 
#include <cctype> 
using namespace std; 

int main() { 
    string str; 
    cout << "Enter a string: "; 
    cin >> str; 

    for (char &c : str) { 
        c = tolower(c); 
    } 

    cout << "Lowercase string: " << str << endl; 
    return 0; 
}