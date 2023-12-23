#include <iostream>
#include <string>
using std::cout;
using std::cin;

enum Color {red = 0, green = 1, blue = 2};

class Human{
    public:
        std::string name;
        std::string occupation;
        int age = 65;
        void eat() {
            cout << "This persoen is eating\n";
        }
        void drink() {
            cout << "This persoen is drinking\n";
        }
};

int main() {
    cout << "hi";
    //enums
    //c++: Switch + String = no
    //Switch + enum = yes
    Color color = blue;

    switch(color) {
        case red: cout << "It's red\n"; break;
        case green: cout << "It's green\n"; break;
        case blue: cout << "It's blue\n"; break;
    }

    //OOP
    Human subject;
    subject.name = "Rick";
    subject.occupation = "scientist";
    cout << subject.name << ", " << subject.occupation << ", " << subject.age << '\n';
    subject.eat();
    subject.drink();

    int end;
    cin >> end;
    return 0;
}