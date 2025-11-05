//Prime number between two intervals.....
//Q22
#include <iostream>
using namespace std;
int main()
{
    int n, i, a, b;
    cout << "Enter the two intervals : ";
    cin >> a >> b;
    cout<<"Prime number is: ";

    for (n = a; n <= b; n++)
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
                break;
        }
        if (i > n / 2)
        {
            cout << " " << n;
        }
    }
    return 0;
}