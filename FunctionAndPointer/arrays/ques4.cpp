// Ques : Write a program to copy the contents of one
// array into another array.
#include <iostream>
using namespace std;
void copyArray(int arr1[], int arr2[])
{
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr1[5 - 1 - i];
    }
}
int main()
{
    int n1[5];
    cout << "Enter 5 elements of array 1" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> n1[i];
    }
    int n2[5];
    copyArray(n1, n2);
    cout << "Elements of array 2 are:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << n2[i] << endl;
    }
}