#include <iostream>
using namespace std;
int power(int n, int m)

{
    if (m == 0)
        return 1;
    if (m == 1)
        return n;
    int a = power(n, m / 2);
    if (m % 2 == 0)
        return a * a;
    else
        return n * a * a;
}
int main()
{
    int n, m;
    cout << "Enter base" << endl;
    cin >> n;
    cout << "Enter exponent" << endl;
    cin >> m;
    cout << power(n, m) << endl;
}