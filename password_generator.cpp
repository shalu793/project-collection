//password generator

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string generatePassword(int length) {
    // Characters allowed in the password
    string characters = 
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789"
        "!@#$%^&*()-_=+{}[]|:;<>?,./";

    string password = "";
    int charactersLength = characters.length();

    // Seed the random number generator
    srand(time(0));

    for (int i = 0; i < length; i++) {
        // Choose a random index
        int index = rand() % charactersLength;
        // Append the character at that index
        password += characters[index];
    }

    return password;
}

int main() {
    int length;

    cout << "Enter the desired password length: ";
    cin >> length;

    string password = generatePassword(length);

    cout << "Generated password: " << password << endl;

    return 0;
}
