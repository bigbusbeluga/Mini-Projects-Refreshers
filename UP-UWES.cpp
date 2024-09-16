#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <map>
using namespace std;

class Student {
public:
    string name;
    int age;
    string address;
    string course;

Student(string n, int a, string add, string c) : name(n), age(a), address(add), course(c) {}

};

class UPSystem {
public:
    vector <Student> listOfStudents;

void enrollStudent(Student enrollee) {
    listOfStudents.push_back(enrollee);
}

void displayEnrollees() {
    cout << "List of Students:\n";
    int counter = {};
    for (Student it : listOfStudents) {
        cout << "Name: " << it.name << endl;
        cout << "Age: " << it.age << endl;
        cout << "Address: " << it.address << endl;
        cout << "Course: " << it.course << endl;
    }
}

};

int main() {
    UPSystem system;

    int age;
    string name, add, course;

    short numberOfEnrollees;
    cout << "How many students do you want to enroll?";
    cin >> numberOfEnrollees;
    for(short it = 0; it < numberOfEnrollees; it++) {
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter address: ";
        getline(cin, add);
        cout << "Enter course: ";
        getline(cin, course);
        cout << "Enter age: ";
        cin >> age;
        Student student(name, age, add, course);
        system.enrollStudent(student);
    }

    system.displayEnrollees();

    return 0;
}