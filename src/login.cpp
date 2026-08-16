#include <iostream>
#include <string>
using namespace std;

bool loginUser(string username, string password) {
    return username == "student" && password == "1234";
}
void startLogin() {
    string username;
    string password;

    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    if (loginUser(username, password)) {
        cout << "Login successful.\n";
    }
    else {
        cout << "Invalid username or password.\n";
    }
}