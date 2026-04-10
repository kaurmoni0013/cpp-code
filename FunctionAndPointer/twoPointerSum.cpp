#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 3, 4, 6, 7, 11, 15};
    int left = 0;
    int right = 6;
    int target = 10;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            cout << "target found at: " << left + 1 << "," << right + 1;
            break;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
}
