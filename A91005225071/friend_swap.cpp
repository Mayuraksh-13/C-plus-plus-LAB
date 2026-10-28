
#include <iostream>
using namespace std;

class B;

class A {
public:
    int x;

    void input() {
        cout << "Enter number for A: ";
        cin >> x;
    }

    friend void swapNumbers(A &, B &);
};

class B {
public:
    int y;

    void input() {
        cout << "Enter number for B: ";
        cin >> y;
    }

    friend void swapNumbers(A &, B &);
};

void swapNumbers(A &a, B &b) {
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main() {
    A obj1;
    B obj2;

    obj1.input();
    obj2.input();

    cout << "\nBefore swapping:\n";
    cout << "A = " << obj1.x << endl;
    cout << "B = " << obj2.y << endl;

    swapNumbers(obj1, obj2);

    cout << "\nAfter swapping:\n";
    cout << "A = " << obj1.x << endl;
    cout << "B = " << obj2.y << endl;

    return 0;
}
