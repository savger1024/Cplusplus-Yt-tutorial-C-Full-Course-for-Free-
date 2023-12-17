#include <iostream>
#include <string>
#include <ctime>

int main() {
    using std::cout;
    using std::cin;
    //start
    std::cout << "hi world" << std::endl;
    //logical operators
    bool sunny = false;
    (!sunny) ? std::cout << "It's cloudy outside" : std::cout << "It's sunny outside";
    std::cout << '\n'; //Ternary operator can't do two '<<'-s

    //some string methods
    std::cout << "Your name? ";
    std::string name;
    std::getline(std::cin, name);
    (name.length() > 12) ? std::cout << "Your name too long (12+)\n" : std::cout << "Your name short enough\n";
    
    (name.empty()) ? std::cout << "You didn't enter your name\n" : std::cout << "You enetered your name\n";
    name.append("@gmail.com");
    std::cout << name.at(0) << std::endl;
    name.insert(0, ",");
    std::cout << name.find(' ') << std::endl; //very big number → didn't find space character
    name.erase(3, 4); //the ending index is not inclusive
    std::cout << name << std::endl;

    //While
    name.clear();
    while(name.empty()) {
        std::cout << "Enter your name, again." << std::endl;
        std::getline(std::cin, name);
    }
    std::cout << "Welcome, " << name << '\n';

    //do while
    int number;
    while(number < 0) { //skips the loop!
        std::cout << "enter a positive number: ";
        std::cin >> number;
    }
    do { //doesn't skip the loop!
        std::cout << "enter a positive number: ";
        std::cin >> number;
    } while(number < 0);

    //for, break, continue
    for (int i = 1; i < 100; i*=3) {
        if(i == 6) continue; // a 6-ot át kell ugorni
        std::cout << i << '\n';
        std::cout << "Happy New Year!\n";
        if(i == 27) break; //81 előtt meg kell állni
    }

    //nested loop
    int rows; int columns; char symbol;
    std::cout << "How many rows?\n";
    std::cin >> rows;
    std::cout << "How many columns?\n";
    std::cin >> columns;
    std::cout << "What is the symbol?\n";
    std::cin >> symbol;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            std::cout << symbol;
        }
        std::cout << std::endl;
    }

    //random
    srand(time(NULL));
    int num = (rand() % 5) + 1;
    std::cout << num << std::endl;
    switch(num) {
        case 1: 
            cout << "You won a bumper ticker\n"; break;
        case 2: 
            cout << "You won a tshirt\n"; break;
        case 3: 
            cout << "You won a free lunch\n"; break;
        case 4: 
            cout << "You won a gift card\n"; break;
        case 5: 
            cout << "You won a concert ticket\n"; break;
    }

    //
    int guess; int tries;

    srand(time(NULL));
    num = rand() % 100;

    do {
        cout << "Enter a number between 1-100: ";
        cin >> guess;
        tries++;

        if(guess > num) {
            cout << "Too high\n";
        }
        else if(guess < num) cout << "Too low\n";
        else cout << "You did it! Number of tries: " << tries/2; //idk


    } while(guess !=  num);

    //end
    int end = 0;
    std::cin >> end;
    return 0;
}