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
    // cout << "\n--- Students ---\n";

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
void searchStudent() {
    int id;

    cout << "Enter student ID: ";
    cin >> id;

    for (const Student& s : students) {
        if (s.id == id) {
            cout << "Name: " << s.name << '\n';
            cout << "Course: " << s.course << '\n';
            return;
        }
    }

    cout << "Student not found.\n";
}

int main() {
    int choice;

   
        cout << "\n=== Student Portal ===\n";
        cout << "1. Show Students\n";
        cout << "2. Add Student\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";

        cin >> choice;
    
        if (choice == 1) {
            addStudent();
            
        }
       
        else if (choice == 2) {
            searchStudent();
        }
        else if (choice == 3) {
            cout << "Goodbye!\n";
            
        }
        else if (choice==4) {
            showStudents();
        }else{
            cout<<"invalid choice"<<endl;
           
        }
    

    

  
    return 0;
}