#include <iostream>
using namespace std;
int Max(int arr[])
{
    int s = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < s)
            s = arr[i];
    }
    return s;
}
int main()
{
    int n[5];
    cout << "Enter 5 elements of array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
    }
    cout << Max(n) << endl;
}