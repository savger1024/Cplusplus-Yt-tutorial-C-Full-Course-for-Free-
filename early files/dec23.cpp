#include <iostream>
#include <iostream>
using std::cout;
using std::cin;

//constructor

class Student {
    public:
        int age;
        std::string name;
        double gpa;
    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

class Car {
    public:
        std::string name;
        std::string color;
    Car(std::string x, std::string y) {
        name = x;
        color = y;
    }
};

//contructor overload
class Pizza {
    public:
        std::string topping1;
        std::string topping2;
    Pizza() {

    }
    Pizza(std::string topping1) {
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2) {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }

};

int main() {
    cout << "hi";

    //contructor

    Student student1("Spngebob", 25, 3.5);
    cout << student1.name << ", " << student1.gpa << '\n';

    Car car1("Mustang", "blue");
    cout << car1.name << ", " << car1.color << '\n';

    //constructor overload
    Pizza pizza1("pepperoni");
    cout << pizza1.topping1 << "\n";
    Pizza pizza2("mushroom", "vegetables");
    cout << pizza2.topping1 << ", " << pizza2.topping2 << '\n';
    Pizza pizza3();
    cout << &pizza3;

    int end;
    cin >> end;
    return 0;
}