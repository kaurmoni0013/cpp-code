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
int combination(int n, int r)
{
    int a = fact(n);
    int b = fact(r);
    int c = fact(n - r);

    return a / (b * c);
}

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}