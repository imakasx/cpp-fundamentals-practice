// Armstrong number.....
// Q24
#include <iostream>
using namespace std;
int main()
{
    int n, ans = 0;
    cout << "Enter the number :";
    cin >> n;
    int Original = n;

    while (n > 0)
    {
        int dig = n % 10;
        ans = dig * dig * dig + ans;
        n = n / 10;
    }
    if (Original == ans)
    {
        cout << "Armstrong number. ";
    }
    else
    {
        cout << "Not armstrong number. ";
    }
    return 0;
}
