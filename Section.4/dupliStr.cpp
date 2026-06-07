#include <iostream>
#include <unordered_set> 
using namespace std; 
 
int main() { 
    string str; 
    cout << "Enter a string: "; 
    cin >> str; 
 
    unordered_set<char> seen; 
    string result = ""; 
 
    for (char c : str) { 
        if (seen.find(c) == seen.end()) { 
            seen.insert(c); 
            result += c; 
        } 
    } 
 
    cout << "String after removing duplicates: " << result << endl; 
    return 0; 
} 