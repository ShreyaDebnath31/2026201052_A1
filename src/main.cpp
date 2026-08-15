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

int main() {
    showStudents();
    return 0;
}