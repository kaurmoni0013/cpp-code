#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter rows: ";
    cin >> r;
    cout << "Enter columns: ";
    cin >> c;

    int n[r][c];
    cout << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> n[i][j];

    int m[r][c];
    cout << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> m[i][j];

    int sum[r][c];
    cout << "Sum of the two matrices:" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = n[i][j] + m[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
