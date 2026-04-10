#include <iostream>
using namespace std;
int main()
{
    int arr[] = {100, 90, 60, 80, 120, 100, 70};
    int windowSum = 0;
    int k = 3;
    int n = 7;
    for (int i = 0; i < k; i++)
    {
        windowSum += arr[i];
    }
    int maxsum = windowSum;
    for (int i = k; i < n; i++)
    {
        windowSum = windowSum - arr[i - k] + arr[i];
        maxsum = max(windowSum, maxsum);
    }
    cout << "maxsum=" << maxsum;
}