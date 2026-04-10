#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(0);
    l.push_front(3);
    l.pop_back();

    for (int i : l)
    {
        cout << i << " ";
    }
    // size, erase, clear, begin, end, rbegin,
    // rend, insert, front, back all are same as vector
}