#include <iostream>
#include <string>
using std::cout;
using std::cin;

//inheritance 1.
class Animal{
    public:
        bool alive = true;
    void eat(){
        cout << "This animal is eating\n";
    }
};
class Dog : public Animal{
    public:
    void bark() {
        cout << "Woof\n";
    }
};
class Cat : public Animal{
    public:
    void meow() {
        cout << "Meow\n";
    }
};

//inheritance 2.
class Shape {
    public:
        double area;
        double volume;
};
class Cube : public Shape {
    public:
        double side;
        Cube(double side) {
            this-> side = side;
            this->area = side * side * 6;
            this->volume = side * side * side;
        }
};
class Sphere : public Shape {
    public:
        double radius;
        Sphere(double radius) {
            this->radius = radius;
            this->area = 4 * 3.14 * (radius * radius);
            this->volume = (4/3.0)*3.14*(radius*radius*radius);
        }
};

int main() {
    cout << "hi\n";

    //inheritance
    Dog dog;
    dog.eat();
    dog.bark();
    Cat cat;
    cat.meow();
    cat.eat();

    //inheritance 2.
    Cube cube(10);
    Sphere sphere(5);
    cout << cube.volume << '\n';
    cout << sphere.volume << '\n';

    int end;
    cin >> end;
    return 0;
}