// Ques : Find the second largest element in the given Array
#include <iostream>
#include <climits>
using namespace std;
int secondlargest(int arr[])
{

    int s = INT_MIN;
    for (int i = 0; i < 5; i++)

        s = max(arr[i], s);

    int secondlargest = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != s)
        {
            secondlargest = max(arr[i], secondlargest);
        }
    }
    return secondlargest;
}
int main()
{
    int n[5];
    cout << "Enter 5 elements of array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
    }
    cout << secondlargest(n) << endl;
}
