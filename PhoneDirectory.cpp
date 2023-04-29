#include <iostream>
#include <string>
#include <map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;




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