#include <iostream>
using namespace std;
int sum(int arr[])
{
    int s = 0;
    for (int i = 0; i < 5; i++)
    {
        s = s + arr[i];
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
    cout << sum(n) << endl;
}