#include <iostream>
using namespace std;
int maze(int n, int m)
{
    int downways = 0;
    int rightways = 0;
    if (n == 1 && m == 1)
        return 1;
    if (m == 1)
        downways += maze(n - 1, m);
    if (n == 1)
        rightways += maze(n, m - 1);
    if (n > 1 && m > 1)
    {
        downways += maze(n - 1, m);
        rightways += maze(n, m - 1);
    }
    int totalways = downways + rightways;
    return totalways;
}
int main()
{
    int n, m;
    cout << "Enter no of Rows" << endl;
    cin >> n;
    cout << "Enter no of Columns" << endl;
    cin >> m;
    cout << maze(n, m) << endl;
}