#include <iostream>
#include <string>

using std::cout;
using std::cin;

void printInfo(std::string name, int age);

int main() {
    cout << "hi";
    //.toupper(guess);

    //memory address
    std::string name = "me";
    cout << &name << '\n'; //address-of operator

    //pass by value + reference
    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x, y);
    cout << "X: " << x << '\n';
    cout << "Y: " << y << '\n';

    //const parameter
    name = "me";
    int age = 21;
    printInfo(name, age);

    //pointer
    //dereference operator
    name = "me";
    age = 21;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    cout << *pName << std::endl;
    cout << *pAge << std::endl;
    cout << *pFreePizzas << std::endl;

    //null pointer
    int *pointer = nullptr;
    int x2 = 123;

    pointer = &x2;

    if (pointer == nullptr){
            cout << "no";
    }
    else {
        cout << "yes";
        cout << *pointer;
    }



    int end;
    cin >> end;
    return 0;
}

//by reference
void swap(std::string &x, std::string &y) { //without the & it won't work (pass by reference)
    std::string temp;
    temp = x;
    x = y;
    y = temp;

}

//const param.
void printInfo(const std::string name, const int age) {
    //NO name = " ";
    //NO age = 0;
    cout << name << std::endl;
    cout << age << std::endl;
}