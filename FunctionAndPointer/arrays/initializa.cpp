#include <iostream>
using namespace std;

int main()
{
    int n[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i <= 5; i++)  //reverse order
    {
        cout << n[5 - i] << endl;
    }
}