#include <iostream>
#include <string>
#include <map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// Define a structure to store the phone directory data
struct PhoneDirectory {
    string name;
    string phone_number;
};


// Function to add a new entry to the directory
void add_entry(map<string, vector<PhoneDirectory>> &directory) {
    PhoneDirectory entry;
    cout<<endl<<endl;
    cout << "Enter the name: ";
    cin >> entry.name;
    cout << "Enter the phone number (Numeric digits only): ";
    cin >> entry.phone_number;

    // Add the new entry to the directory
    directory[entry.name] .push_back(entry);
}



int main() {
    map<string, vector<PhoneDirectory>> directory;

    while (true) {
        cout << "1. Add entry" << endl;
        cout << "2. Search entry" << endl;
        cout << "3. Display all entries" << endl;
        cout << "4. Delete an entry" << endl;
        cout << "5. Update an entry" << endl;
        cout << "6. Quit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                add_entry(directory);
                cout<<endl<<endl;
                break;
            case 2:
                search_entry(directory);
                cout<<endl<<endl;
                break;
            case 3:
                display_entries(directory);
                cout<<endl<<endl;
                break;
            case 4:
                delete_entry(directory);
                cout<<endl<<endl;
                break;
            case 5:
                update_entry(directory);
                cout<<endl<<endl;
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
                cout<<endl<<endl;
                break;
        }
    }

    return 0;
}