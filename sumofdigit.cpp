#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter anumber" << endl;
    cin >> n;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    cout << sum << endl;
    return 0;
}