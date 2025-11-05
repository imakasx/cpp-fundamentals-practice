//check the storng numbre
//Q27
//logic : check a number is equal to the given a number in sum of the factorial of its digits......
#include <iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact*= i;
    }
    return fact;
}
int main()
{
    int n, sum = 0;
    cout << "Enter the number :";
    cin >> n;
    int Original = n;

    while (n > 0)
    {
        int digit = n % 10;
        sum += factorial(digit);
        n = n / 10;
    }
    if (Original == sum )
    {
        cout << "Strong number. ";
    }
    else
    {
        cout << "Not Strong number. ";
    }
    return 0;
}
