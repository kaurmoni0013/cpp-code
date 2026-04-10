#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int n[size];
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
        cin >> n[i];

    bool isPalindrome = true;

    for (int i = 0; i < size / 2; i++)
    {
        if (n[i] != n[size - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "Palindrome Array" << endl;
    else
        cout << "Not a Palindrome Array" << endl;

    return 0;
}
