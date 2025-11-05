// Sum of digit number....
// Q25
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the number :";
    cin >> n;

    while (n > 0)
    {
        int result = n % 10;
        sum = sum + result;
        n = n / 10;
    }
    cout << "sum of:" << sum;
    return 0;
}