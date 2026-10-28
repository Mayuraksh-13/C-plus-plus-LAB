
#include <iostream>
#include <string>
using namespace std;

class Media {
protected:
    string title, publication;

public:
    virtual void read() {
        cout << "Enter title: ";
        getline(cin, title);

        cout << "Enter publication: ";
        getline(cin, publication);
    }

    virtual void show() {
        cout << "Title: " << title << endl;
        cout << "Publication: " << publication << endl;
    }

    virtual ~Media() {}
};

class Book : public Media {
private:
    int pages;

public:
    void read() override {
        Media::read();

        cout << "Enter number of pages: ";
        cin >> pages;
        cin.ignore();
    }

    void show() override {
        cout << "\nBook Details\n";
        Media::show();
        cout << "Pages: " << pages << endl;
    }
};

class Tape : public Media {
private:
    float playingTime;

public:
    void read() override {
        Media::read();

        cout << "Enter playing time in minutes: ";
        cin >> playingTime;
        cin.ignore();
    }

    void show() override {
        cout << "\nVideotape Details\n";
        Media::show();
        cout << "Playing Time: " << playingTime
             << " minutes" << endl;
    }
};

int main() {
    Book b;
    Tape t;

    Media *ptr;

    cout << "Enter Book Information\n";
    ptr = &b;
    ptr->read();

    cout << "\nEnter Videotape Information\n";
    ptr = &t;
    ptr->read();

    cout << "\nDisplaying Information\n";

    ptr = &b;
    ptr->show();

    ptr = &t;
    ptr->show();

    return 0;
}
