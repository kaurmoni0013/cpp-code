#include <iostream>
using namespace std;
int maze(int cr, int cc, int er, int ec)
{
    int downways = 0;
    int rightways = 0;
    if (cr == er && cc == ec)
        return 1;
    if (cc == ec)
        downways += maze(cr + 1, cc, er, ec);
    if (cr == er)
        rightways += maze(cr, cc + 1, er, ec);
    if (cr < er && cc < ec)
    {
        downways += maze(cr + 1, cc, er, ec);
        rightways += maze(cr, cc + 1, er, ec);
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
    cout << maze(1, 1, n, m) << endl;
}