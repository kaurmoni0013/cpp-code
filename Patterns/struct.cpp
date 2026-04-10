#include <iostream>
using namespace std;

// User-defined data type using struct
struct Student
{
    string name;
    int age;
    float marks;
};

int main()
{
    // Basic variables
    int x;
    float y;
    char grade;

    // Input basic variables
    cout << "Enter an integer: ";
    cin >> x;

    cout << "Enter a floating number: ";
    cin >> y;

    cout << "Enter a grade (A/B/C): ";
    cin >> grade;

    // Displaying basic variables
    cout << "\nYou entered:\n";
    cout << "Integer: " << x << endl;
    cout << "Float: " << y << endl;
    cout << "Grade: " << grade << endl;

    // User-defined struct variable
    Student s;

    cout << "\nEnter student name: ";
    cin >> s.name;

    cout << "Enter student age: ";
    cin >> s.age;

    cout << "Enter student marks: ";
    cin >> s.marks;

    // Display struct data
    cout << "\nStudent Details:\n";
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}
