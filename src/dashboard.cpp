#include <iostream>
#include <vector>
#include <string>
using namespace std;

void showDashboard(int totalStudents) {
    cout << "\n--- Student Dashboard ---\n";
    cout << "Total students: " << totalStudents << '\n';
}

void showCourseCount(int cseStudents, int eceStudents) {
    cout << "CSE students: " << cseStudents << '\n';
    cout << "ECE students: " << eceStudents << '\n';
}
void showWelcomeMessage(string name) {
    cout << "Welcome, " << name << "!\n";
}
void showDashboardHelp() {
    cout << "\nDashboard options:\n";
    cout << "1. View student count\n";
    cout << "2. View course statistics\n";
}