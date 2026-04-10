#include <iostream>
using namespace std;
int sum(int n, int s)
{
    if (n == 0)
        return s;
    return sum(n - 1, s + n);
}
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    cout << sum(n, 0) << endl;

    return 0;
}