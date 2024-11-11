#include <iostream>
#include <string>
#include <ctime>

using namespace std;

string generatePassword(int length) {
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{};':\"\\|,.<>/?";
    string password = "";

    for (int i = 0; i < length; i++) {
        password += characters[rand() % characters.length()];
    }

    return password;
}

int main() {
    int passwordLength;

    cout << "Enter password length: ";
    cin >> passwordLength;

    cout << "Your password is: " << generatePassword(passwordLength) << endl;

    return 0;
}
