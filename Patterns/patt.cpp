#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
                cout << j << " ";

            else
            {
                cout << ch << " ";
                ch++;
            }
        }
        ch = 'A';
        cout << endl;
    }
}