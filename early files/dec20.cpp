#include <iostream>
#include <string>

using std::cout;
using std::cin;
void walk1(int steps);
void walk2(int steps);
int factorial(int num);

//function template
template <typename T, typename U>
auto max(T x, U y) {
    return (x > y) ? x : y;
}

int main() {
    cout << "hi";

    int *pNum = NULL;
    pNum = new int;
    *pNum = 21;
    cout << "address: " << pNum << std::endl;
    cout << "value: " << *pNum << std::endl;
    delete pNum;

    //dynamic
    int size;
    cout << "How many grades?";
    cin >> size;
    char *pGrades = NULL;
    pGrades = new char(size);

    for(int i = 0; i < size; i++) {
        cout << "Enter grade #" << i << ": ";
        cin >> pGrades[i];
    }
    for(int i = 0; i < size; i++) {
        cout << pGrades[i] << " ";
    }
    //recursion
    walk1(10);
    walk2(10);
    cout << factorial(10);

    //functionn template



    int end;
    cin >> end;
    return 0;
}

//recursive
void walk1(int steps) {
    for (int i = 0; i < steps; i++) {
        cout << "You take a step!" << i << std::endl;
    }
}
void walk2(int steps) {
    if (steps > 0) {
        cout << "You take a step!" << steps << std::endl;
        walk2(steps -1); //walk2(steaps) → stack overflow
    }
}
int factorial(int num) {
    if(num >1) {
        return num * factorial(num - 1);
    }
    else {
        return 1;
    }
}