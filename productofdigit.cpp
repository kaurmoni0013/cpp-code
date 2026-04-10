#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter anumber" << endl;
    cin >> n;
    int product = 1;
    while (n > 0)
    {
        int digit = n % 10;
        product *= digit;
        n = n / 10;
        if(digit==0){
            product=0;
            break;
        }
    }
    cout << product << endl;
    return 0;
}