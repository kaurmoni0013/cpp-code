#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit % 2 == 0)
        {
            sum = sum + digit;
        }
        n = n / 10;
    }
    cout << sum << endl;
    return 0;
}