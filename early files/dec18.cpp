#include <iostream>
#include <string>
//#include <iomanip>
using std::cin;
using std::cout;


//globals
std::string str2 = "New Year";
// You have to declare functions first (if you use it after int main())
void birthDay(std::string name, int age);
double square(double length);
std::string birthDay(std::string str1, std::string str2);

int main() {
    //start

    //functions
    birthDay("Janos", 15);
    birthDay("Bela", 25);
    birthDay("Jozsef", 35);

    //return
    double length = 6.0;
    double area = square(length);
    cout << "Area: " << area << "cm/2\n";

    std::string str1 = "Happy";
    std::string str2 = "Birthday";
    cout << birthDay(str1, ::str2) << '\n';

    //end
    int end;
    cin >> end;
    //std::cin.clear();
    //fflush(stdin);
    return 0;
}

//function
void birthDay(std::string name, int age) {
    cout << "Happy birthday to " << name  <<'\n';
    cout << "Happy birthday to " << name << '\n';
    cout << "Happy birthday dear " << name << '\n';
    cout << "Happy birthday to you!\n";
    cout << "You are now "  << age << " year old.\n\n";
}

//return

double square(double length) {
    return length * length;
}

//overload
std::string birthDay(std::string str1, std::string str2) {
    return str1 + " " + str2;
}