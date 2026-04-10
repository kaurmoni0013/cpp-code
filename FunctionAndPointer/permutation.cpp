#include <iostream>
using namespace std;
int fact(int a)
{
    int f = 1;
    for (int i = 1; i <= a; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    int r;
    cout << "Enter r" << endl;
    cin >> r;

    int a = fact(n);
    int c = fact(n - r);
    cout << a / c << endl;

    return 0;
}