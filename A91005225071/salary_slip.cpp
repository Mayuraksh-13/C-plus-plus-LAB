
#include <iostream>
using namespace std;

class Person
{
    char name[64];
    float salary;

public:
    Person(char n[], float s)
    {
        int i = 0;

        while (n[i] != '\0')
        {
            name[i] = n[i];
            i++;
        }

        name[i] = '\0';
        salary = s;
    }

    void display()
    {
        float basic = salary * 0.50;
        float hra = salary * 0.20;
        float da = salary * 0.10;
        float other = salary * 0.20;

        cout << "\n----- SALARY SLIP -----";
        cout << "\nName: " << name;
        cout << "\nBasic Salary: " << basic;
        cout << "\nHRA: " << hra;
        cout << "\nDA: " << da;
        cout << "\nOther Allowance: " << other;
        cout << "\nTotal Salary: " << salary << endl;
    }
};

int main()
{
    char name[64];
    float salary;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter total salary: ";
    cin >> salary;

    Person p(name, salary);
    p.display();

    return 0;
}
