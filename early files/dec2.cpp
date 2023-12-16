#include <iostream>
#include <string>
#include <cmath>

int main() {
    int students = (6-5) + 4 * (3 / 2);
    students += 1;
    students++;
    students -= 1;
    students--;
    students *= 2;
    students /= 2;
    students %= 6;
    std::cout << students << std::endl;


    //type conversion
    
    double x = (int) 3.14;
    std::cout << (char) 100 << std::endl;

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;

    //user input

    std::string name;
    std::cout << "Full name? ";
    std::getline(std::cin >> std::ws, name); //ws→no unnecessary whitespace
    std::cout << "Hi, " << name << std::endl;
    std:: cout << "Press anything to end";
    std::cin >> name;

    int age;
    std::cout << "Age? ";
    std::cin >> age;
    return 0;

    //math function
    double x1 = 3.14;
    double x2 = 4;
    double x3;

    x3 = std::max(x1, x2);
    x3 = std::min(x1, x2);
    x3 = pow(x1, x2);
    x3 = sqrt(x2);
    x3 = abs(x2);
    x3 = round(x2);
    x3 = ceil(x2);
    x3 = floor(x2);
    
    //if
    if(age > 100) {
        std::cout << "You are an old man";
    }
    else if(age > 18) {
        std::cout << "You are an adult";
    }
    else if (age < 0) {
        std::cout << "You haven't been born yet";
    }
    else {
        std::cout << "You are not an adult";
    }
    //switch //default

    //ternary operator
    int point = 75;
    (point >= 60) ? std::cout << "You pass" : std::cout << "You fail";

}