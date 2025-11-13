#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    string email;
};

int main() {
    Student s[500];
    int n;

    cout << "How many students? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter ID: ";
        cin >> s[i].id;
        cout << "Enter Name: ";
        cin >> s[i].name;
        cout << "Enter Email: ";
        cin >> s[i].email;
    }

    cout << "\n--- Student List ---\n";
    for (int i = 0; i < n; i++) {
        cout << "ID: " << s[i].id
             << " Name: " << s[i].name
             << " Email: " << s[i].email << endl;
    }

    return 0;
}
