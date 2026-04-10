#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    int factorial = 1;
    while (n > 0)
    {
        int digit = n;
        factorial = factorial * digit;

        n--;
    }
    cout << factorial << endl;

    return 0;
}