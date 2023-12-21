#include <iostream>
#include <string>
using std::cout;
using std::cin;

//struct
struct student {
    std::string name;
    double gpa;
    bool enrolled = true;
};

//pass struct as parameter
void printStudent(student &student) {
    cout << student.name << ", ";
    cout << student.gpa << ", ";
    cout << student.enrolled << std::endl;
}

void gpaChange(student &student, double gpa) {
    student.gpa = gpa;
}

int main() {
    //struct
    student student1;
    //.: Class member access operator
    student1.name = "spongebob";
    student1.gpa = 3.22;

    student student2;
    student2.name = "patrick";
    student2.gpa = 2.1;
    student2.enrolled = false;

    cout << student1.name << ", " << student1.gpa << ", " << student1.enrolled << '\n';
    cout << student2.name << ", " << student2.gpa << ", " << student2.enrolled << '\n';

    //pass struct as parameter
    printStudent(student1);
    gpaChange(student2, 4.0);
    printStudent(student2);

    int end;
    cin >> end;
    return 0;
}