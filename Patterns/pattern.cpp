#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {3, 4, 6, 4, 5, 2};
    // double a = 0;
    // double avg;
    // int max = 0;
    // int min = arr[0];
    int duplicate = arr[0];
    int x;
    for (int i = 0; i <= 5; i++)
    {

        if (arr[i] == duplicate)
            x = i;
        // if (arr[i] < min)
        // {

        //     min = arr[i];
        // }
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }

        // {
        //     if (arr[i] % 2 == 0)
        //     {
        //         cout << "even no " << arr[i] << " ";
        //     }
        //     else
        //         cout << "odd no " << arr[i] << " ";
        // }
        // for (int i : arr)
        // {
        //     cout << i << " ";
        // }
    }
    // cout << "max =  " << max << endl;
    // cout << "min = " << min;
    cout << "duplicate is on index no= " << x << " ";
}