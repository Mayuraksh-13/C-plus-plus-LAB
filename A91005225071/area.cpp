
#include <iostream>
#include <cmath>
using namespace std;

void AREA(float r)
{
    cout << "Area of circle = " << 3.14 * r * r << endl;
}

void AREA(float a, float b)
{
    cout << "Area of rectangle = " << a * b << endl;
}

void AREA(float a, float b, float c)
{
    if (a + b > c && a + c > b && b + c > a)
    {
        float s = (a + b + c) / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));

        cout << "Area of triangle = " << area << endl;
    }
    else
    {
        cout << "Invalid triangle" << endl;
    }
}

int main()
{
    float r, a, b, x, y, z;

    cout << "Enter radius of circle: ";
    cin >> r;
    AREA(r);

    cout << "Enter two sides of rectangle: ";
    cin >> a >> b;
    AREA(a, b);

    cout << "Enter three sides of triangle: ";
    cin >> x >> y >> z;
    AREA(x, y, z);

    return 0;
}
