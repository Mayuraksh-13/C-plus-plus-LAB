
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;
    char name[64];

public:
    void inputStudent()
    {
        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter name: ";
        cin >> name;
    }
};

class Exam : public Student
{
protected:
    int marks[6];

public:
    void inputMarks()
    {
        for (int i = 0; i < 6; i++)
        {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
};

class Result : public Exam
{
public:
    void displayResult()
    {
        int total = 0;

        for (int i = 0; i < 6; i++)
            total += marks[i];

        cout << "\nRoll Number: " << roll;
        cout << "\nName: " << name;
        cout << "\nTotal Marks: " << total << " out of 600";
        cout << "\nPercentage: " << total / 6.0 << "%" << endl;
    }
};

int main()
{
    Result r;

    r.inputStudent();
    r.inputMarks();
    r.displayResult();

    return 0;
}
