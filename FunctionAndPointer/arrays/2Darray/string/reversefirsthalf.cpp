#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    string s = "raghav";
    cout << s << endl;
    int n = s.length(); // n =6
     reverse(s.begin(), s.begin() + 3);
    // int i = 0;   
    // int j = n / 2 - 1;
    // while (i < j)
    // {
    //     char temp = s[i];
    //     s[i] = s[j];
    //     s[j] = temp;
    //     i++;
    //     j--;

    //     cout << s << endl;
    // }
}