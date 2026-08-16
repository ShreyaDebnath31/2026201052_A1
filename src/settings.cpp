#include <iostream>
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