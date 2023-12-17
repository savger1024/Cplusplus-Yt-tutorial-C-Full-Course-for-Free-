#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
using num_t = int; //same result;

namespace first {
    int x = 1;
}

namespace first2 {
    int x = 2;
}

int main() {
    using namespace first;
     //using std::cout; //::string;

    std::cout << "I sort of like pizza" << std::endl;
    std::cout << "It's quite good" << '\n';
    char grade = 'A'; // 'AB' → no
    bool student = true;
    bool forSale = false;
    std::string name = "John";
    std::string day = "Friday";
    std::cout << "Hi, " << name << '\n';
    const double PI = 3.14;
    x = 0;
    int x = 1;
    std::cout << x << first::x << first2::x; //default: first, kivéve ha külön deklarálsz

    text_t petName = "Axel";
    std::cout << name;

 
    return 0;
}