#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    // iterator is a pointer which points to an element in the vector
    cout << "v.begin : " << *(v.begin()) << endl;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << endl;
    // reverse iterator
    vector<int>::reverse_iterator itr;
    for (itr = v.rbegin(); itr != v.rend(); itr++)
        cout << *itr << " ";
    // using auto keyword =we do not have to specify the data type of iterator ( vector<int>::reverse_iterator itr;)
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
}