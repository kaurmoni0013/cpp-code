#include <iostream>
using namespace std;
int main()
{
    int n = 65;
    int a = 97;
    while (97 <= a && a <= 122)
    {
        char c = char(a);
        cout << a << " = " << c << endl;
        a++;
    }
    while (65 <= n && n <= 90)
    {
        char ch = char(n);
        cout << n << " = " << ch << endl;
        n++;
    }
}