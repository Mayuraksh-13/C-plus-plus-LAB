#include <iostream>
using namespace std;

class Shape
{
    float radius, length, width;

public:
    // Constructor
    Shape(float r, float l, float w)
    {
        radius = r;
        length = l;
        width = w;
    }

    // Calculate perimeter of circle
    float circlePerimeter()
    {
        return 2 * 3.14159 * radius;
    }

    // Calculate perimeter of rectangle
    float rectanglePerimeter()
    {
        return 2 * (length + width);
    }

    // Destructor
    ~Shape()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    float radius, length, width;

    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    Shape s(radius, length, width);

    cout << "Perimeter of circle = " << s.circlePerimeter() << endl;
    cout << "Perimeter of rectangle = " << s.rectanglePerimeter() << endl;

    return 0;
}