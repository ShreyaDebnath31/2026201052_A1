#include <iostream>
#include <string>
using namespace std;

bool loginUser(string username, string password) {
    return username == "student" && password == "1234";
}

void startLogin() {
    string username;
    string password;

    for (int attempt = 1; attempt <= 3; attempt++) {
        cout << "Username: ";
        cin >> username;

        cout << "Password: ";
        cin >> password;

        if (loginUser(username, password)) {
            cout << "Login successful.\n";
            return;
        }

        cout << "Invalid username or password.\n";
    }

    cout << "Too many failed login attempts.\n";
}

void logoutUser() {
    cout << "Student logged out succesfully.\n";

}

void welcome(){
    cout<<"Welcome to student portal"<<endl;
}