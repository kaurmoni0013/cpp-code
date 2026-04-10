#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    string s = "raghav";
    cout << s << endl;
    int n = s.length();
    reverse(s.begin(), s.end());
    cout << s << endl;
    // reverse string
    // int i = 0;
    // int j = n - 1;
    // while (i < j)
    // {
    //     char temp = s[i];
    //     s[i] = s[j];
    //     s[j] = temp;
    //     i++;
    //     j--;
    // }
    // cout << s << endl;
}