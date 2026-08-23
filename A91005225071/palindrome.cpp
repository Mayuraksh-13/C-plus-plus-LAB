#include <iostream>
using namespace std;

int main()
{
    int num, original, reverse = 0, digit;

    cout << "Enter an integer: ";
    cin >> num;

    original = num;

    while (num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (original == reverse)
        cout << "The integer is a palindrome.";
    else
        cout << "The integer is not a palindrome.";

    return 0;
}