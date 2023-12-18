#include <iostream>
#include <string>
using std::cout;


int main() {
    std::string car[] = {"Mustang", "Corvette"}; //only one variable type
    //std::string car[2];
    car[0] = "Camero";
    cout << car[0] << std::endl;
    cout << car[1] << std::endl;

    //sizeof
    double gpa = 2.5;
    cout << sizeof(double) << "bytes\n";
    cout << sizeof(car)/sizeof(std::string) << " elements\n";
    const int elements = sizeof(car)/sizeof(std::string); //you may need to pass this element as a parameter to a function like getTotal(double prices[], int elements)
    for (int i = 0; i < elements; i++) {
        cout << car[i] << std::endl;
    }
    //for(string student : students) {cout << student << std::endl;} //students is the array


    //fill
    const int SIZE = 100;
    std::string foods[SIZE]; //vectors dinamic?

    fill(foods, foods + SIZE/3, "pizza");
    fill(foods + SIZE/3, foods + SIZE/3 *2, "hamburger");
    fill(foods + SIZE/3*2, foods + SIZE, "hotdog");

    for(std::string food : foods) {
        cout << food << std::endl;
    }

    //array + input
    std::string foods2[5];
    int size = sizeof(foods2)/sizeof(foods2[0]);
    std::string temp;

    for(int i = 0; i  < size; i++) {
        cout << "Enter 'q' to quit or a food you like #" << i+1 << ": ";
        std::getline(std::cin, temp);
        if(temp=="q") {
            break;
        }
        else {
            foods2[i] = temp;
        }
    }

    cout << "You like the following food:\n";

    for (int i = 0; !foods2[i].empty(); i++)
    {
        cout << foods2[i] << std::endl;
    }

    //multi-dimensional array
    //int num[][2] = {{1,2}, {3,4}, {5,6}, {7,8}, ...};
    //int rows = sizeof/sizeof; int cols = sizeof/sizeof;
    //for(i) {for(j) {cout cars[i][j]}}

    int end;
    std::cin  >> end;
    return 0;
    

}