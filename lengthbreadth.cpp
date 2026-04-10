#include <iostream>
using namespace std;
int area(int length, int breadth)
{
    int n = length * breadth;
    return n;
}
int perimeter(int length, int breadth)
{
    int n = 2 * (length + breadth);
    return n;
}
int main()
{
    cout << "Enter length and breadth" << endl;
    int length, breadth;
    cin >> length >> breadth;
    cout << "area is " << area(length, breadth) << endl;
    cout << "perimeter is " << perimeter(length, breadth) << endl;
    if (area(length, breadth) > perimeter(length, breadth))
    {
        cout << "area is greater than perimeter" << endl;
    }
    else if (area(length, breadth) < perimeter(length, breadth))
    {
        cout << "perimeter is greater than area" << endl;
    }
    else
    {
        cout << "area is equal to perimeter" << endl;
    }
    return 0;
}