// HW : Find the difference between the sum of elements
// at even indices to the sum of elements at odd indices.

#include <iostream>
using namespace std;
int difference(int arr[])
{
    int evenSum = 0;
    int oddSum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            evenSum = evenSum + arr[i];
        }
        else
        {
            oddSum = oddSum + arr[i];
        }
    }
    return evenSum - oddSum;
}
int main()
{
    int n[5];
    cout << "Enter 5 elements of array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
    }
    cout << difference(n) << endl;
}