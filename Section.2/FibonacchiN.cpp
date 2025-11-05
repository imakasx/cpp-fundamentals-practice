//febonacchi series...
//Q23
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, n;
    cout << "Enter the number :";
    cin >> n;
    a = 0, b = 1;

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}