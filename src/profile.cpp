#include <iostream>
#include <string>
using namespace std;

void showProfile(int id,string name, string course) {
    cout << "\n--- Student Profile ---\n";
    cout << "Student ID: "<<id<<endl;
    cout << "Name: " << name << '\n';
    cout << "Course: " << course << '\n';
}

void updateCourse(string &course){
    cout<< "Enter new course: ";
    cin>> course;
    cout<<"Course update successfully"<<endl;
}

void showProfileStatus() {
    cout << "Profile status: Active\n";
}
void showEmail(string email) {
    cout << "Email: " << email << '\n';
}
void showPhone(string phone) {
    cout << "Phone: " << phone << '\n';
}

void showAddress(string address) {
    cout << "Address: " << address << '\n';
}