#include <iostream>
using namespace std;
int print(int a)
{
    if (a == 0)
        return 0;
    cout << a << endl;
    print(a - 1);
}

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    print(n);

    return 0;
}