#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //     vector<int> v;

    //     v.push_back(2);
    //     v.push_back(1);
    //     v.push_back(3);
    //     v.push_back(5);
    //     v.push_back(6);

    //     cout << v.size() << endl;

    //     cout << v.capacity() << endl;
    //     v.pop_back();

    //     for (int val : v)
    //     {
    //         cout << val << endl;
    //     }
    //     cout << "front" << v.front() << endl;
    //     cout << "back" << v.back() << endl;
    //     cout << "at 2nd index " << v.at(2) << endl;

    vector<int> vec{1, 2, 3, 4};
    vector<int> vec2(vec);
    vec2.erase(vec2.begin() + 2);
    vector<int> a(5, 1); // size 5 and all elements are 1
    vec2.erase(vec2.begin() + 2, vec2.begin() + 3);
    vec2.insert(vec2.begin() + 2, 100);
    vec2.clear();
    cout << "isempty" << vec2.empty() << endl;

    for (int val : vec2)
    {
        cout << val << endl;
    }
}
