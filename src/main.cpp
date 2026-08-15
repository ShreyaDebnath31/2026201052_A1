#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student {
    int id;
    string name;
    string course;
};

vector<Student> students = {
    {101, "Shreya", "CSE"},
    {102, "Ananya", "ECE"}
};

void showStudents() {
    cout << "\n--- Students ---\n";

    for (const Student& s : students) {
        cout << "ID: " << s.id
             << " | Name: " << s.name
             << " | Course: " << s.course << '\n';
    }
}

void addStudent() {
    Student s;

    cout << "Enter ID: ";
    cin >> s.id;

    cin.ignore();

    cout << "Enter name: ";
    getline(cin, s.name);

    cout << "Enter course: ";
    getline(cin, s.course);

    students.push_back(s);

    cout << "Student added successfully.\n";
}

int main() {
    showStudents();
    addStudent();

    cout << "\nUpdated student list:\n";
    showStudents();
    return 0;
}