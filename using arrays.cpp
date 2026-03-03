
#include <string>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo() {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student;
    student.fir#include <iostream>
#include <string>
using namespace std;

struct Student {
    string fullName;
    float marks;
};

void displayStudentInfo(Student s) {
    cout << "Student Name: " << s.fullName << endl;
    cout << "Marks: " << s.marks << endl;
}

int main() {
    int numStudents;
    cout << "Enter number of students: ";
    cin >> numStudents;
    cin.ignore();

    Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        cout << "Full Name: ";
        getline(cin, students[i].fullName);
        cout << "Marks: ";
        cin >> students[i].marks;
        cin.ignore();
        stName = "John";
    student.lastName = "Doe";
    student.rollNumber = 123;
    student.marks = 85.5;

    student.displayStudentInfo();
    return 0;
}
 