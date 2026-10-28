
#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void input()
    {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    void display()
    {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }

    Complex operator+(Complex c)
    {
        Complex t;
        t.real = real + c.real;
        t.imag = imag + c.imag;
        return t;
    }

    Complex operator-(Complex c)
    {
        Complex t;
        t.real = real - c.real;
        t.imag = imag - c.imag;
        return t;
    }

    Complex operator++()
    {
        ++real;
        ++imag;
        return *this;
    }

    Complex operator--()
    {
        --real;
        --imag;
        return *this;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "First complex number\n";
    c1.input();

    cout << "Second complex number\n";
    c2.input();

    cout << "\nAddition: ";
    c3 = c1 + c2;
    c3.display();

    cout << "Subtraction: ";
    c3 = c1 - c2;
    c3.display();

    cout << "After incrementing first number: ";
    ++c1;
    c1.display();

    cout << "After decrementing second number: ";
    --c2;
    c2.display();

    return 0;
}

