#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8};
    int sum = 0;
    int a = 0;

    for (int i = 1; i <= 8; i++)
    {
        sum += i;
    }
    for (int j = 0; j <= 6; j++)
    {
        a += arr[j];
    }
    cout << "missing element is = " << sum - a;
}