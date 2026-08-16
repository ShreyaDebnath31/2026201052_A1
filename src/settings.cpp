#include <iostream>
#include <string>
using namespace std;

void showSettings() {
    cout << "\n--- Student Portal Settings ---\n";
}

void SetNotifications(bool enabled){
    if(enabled){
        cout<<" Notifications enabled"<<endl;
    }else{
        cout<<"Notifications disabled"<<endl;
    }
}

void setDisplayMode(string mode) {
    cout << "Display mode changed to: " << mode << '\n';
}

void resetSettings() {
    cout << "Portal settings restored to default.\n";
}
