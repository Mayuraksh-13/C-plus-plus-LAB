
#include <iostream>
using namespace std;

class Person
{
public:
    char name[64];
    int age;
    char address[64];
    float salary;

    inline void input()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter address: ";
        cin >> address;

        cout << "Enter salary: ";
        cin >> salary;
    }
};

int main()
{
    Person p[10];
    int n, young = 0, old = 0;

    cout << "Enter number of persons: ";
    cin >> n;

    if (n < 1 || n > 10)
    {
        cout << "Enter between 1 and 10 persons.";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\nPerson " << i + 1 << endl;
        p[i].input();
    }

    for (int i = 1; i < n; i++)
    {
        if (p[i].age < p[young].age)
            young = i;

        if (p[i].age > p[old].age)
            old = i;
    }

    cout << "\nYoungest: " << p[young].name;
    cout << ", Age: " << p[young].age;

    cout << "\nEldest: " << p[old].name;
    cout << ", Age: " << p[old].age;

    return 0;
}
