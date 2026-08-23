#include <iostream>
using namespace std;

int main()
{
    int num, original, digit, sum = 0;

    cout << "Enter an integer: ";
    cin >> num;

    original = num;

    while (num != 0)
    {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if (original == sum)
        cout << "The number is an Armstrong number.";
    else
        cout << "The number is not an Armstrong number.";

    return 0;
}