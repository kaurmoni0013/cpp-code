#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter anumber" << endl;
    cin >> n;
    int reverse = 0;
    int a = n;
    while (n > 0)
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    cout << reverse << endl;
    cout << reverse + a << endl;
    return 0;
}