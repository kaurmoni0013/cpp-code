#include <iostream>
using namespace std;
void tower(int n, char source, char destination, char helper)
{
    if (n == 0)
    {
        return;
    }
    tower(n - 1, source, destination, helper);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    tower(n - 1, helper, source, destination);
    return;
}
int main()
{
    int n;
    cout << "Enter no of disks" << endl;
    cin >> n;
    tower(n, 'A', 'B', 'C');
    return 0;
}
