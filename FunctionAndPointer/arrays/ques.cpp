// Ques : Given an array of integers, change the value of
// all odd indexed elements to its second multiple and
// increment all even indexed value by 10.
#include <iostream>
using namespace std;
void changeArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = arr[i] + 10;
        }
        else
        {
            arr[i] = arr[i] * 2;
        }
    }
}
int main()
{
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    int arr[100];
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    changeArray(arr, n);
    cout << "Modified array is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}