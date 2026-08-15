#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    string course;
};

int main() {
    cout << "=== Student Portal ===\n";
    cout << "1. Show Students\n";
    cout << "2. Add Student\n";
    cout << "3. Search Student\n";
    cout << "4. Exit\n";

    return 0;
}