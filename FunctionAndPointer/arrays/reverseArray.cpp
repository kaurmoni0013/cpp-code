#include <iostream>
using namespace std;

int main()
{
    int n[5];
    cout << "Enter 5 array elements: ";
    for (int i = 0; i < 5; i++)
        cin >> n[i];

    // Reverse the array
    for (int i = 0; i < 5 / 2; i++)
    {
        int temp = n[i];
        n[i] = n[5 - 1 - i];
        n[5 - 1 - i] = temp;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < 5; i++)
        cout << n[i] << " ";

    cout << endl;
    return 0;
}
