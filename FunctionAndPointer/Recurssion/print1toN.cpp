#include <iostream>
using namespace std;
int print(int a)
{
    if (a == 0)
    {
        return 0;
    }
    print(a - 1);
    cout << a << endl;
}

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    print(n);

    return 0;
}