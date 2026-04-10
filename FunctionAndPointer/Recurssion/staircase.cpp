#include <iostream>
using namespace std;
int stair(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    if (n == 1 || n == 2)
        return n;

    return stair(n - 1) + stair(n - 2) + stair(n - 3);
}
int main()
{
    int n;
    cout << "Enter a n" << endl;
    cin >> n;
    cout << stair(n) << endl;
}