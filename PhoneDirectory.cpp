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

// Function to search for an entry in the directory
void search_entry(map<string, vector<PhoneDirectory>> &directory) {
    string name;
    cout<<endl<<endl;
    cout << "Enter the name: ";
    cin >> name;

    // Search for the entry in the directory
    map<string, vector<PhoneDirectory>>::iterator it = directory.find(name);
    if (it != directory.end()) {
        cout<<endl;
        cout << "Name: " << name << endl;
        cout << "Phone number: ";
        for(int i=0;i<(it->second).size();i++){
          PhoneDirectory entry=(it->second)[i];
          
          cout  << entry.phone_number <<" ";
        }
        cout<<endl;

    } else {
        cout<<endl<<endl;
        cout << "No entry found with name " << name << endl;
    }
}
 

// Function to display all the entries in the directory
void display_entries(map<string, vector<PhoneDirectory>> &directory) {
  if(directory.size()==0){
    cout<<endl;
    cout<<"Till now,there is no entry in the Phonedirectory ."<<endl;
    return ;
  }
    cout<<endl;
    cout << "Phone Directory:" << endl;
    for (map<string, vector<PhoneDirectory>>::iterator it = directory.begin(); it != directory.end(); it++) {
        cout << "Name: " << it->first<< endl;
        cout << "Phone number: ";
       
        for(int i=0;i<(it->second).size();i++){
          PhoneDirectory entry=(it->second)[i];
          
          cout << entry.phone_number <<" ";
        }
        cout << endl;
    }
}

// Function to delete an entryin the directory
void delete_entry(map<string, vector<PhoneDirectory>> &directory) {
    string name,number;
    cout<<endl<<endl;
    cout << "Enter the name: ";
    cin >> name;
    // Search for the entry in the directory
    map<string, vector<PhoneDirectory>>::iterator it = directory.find(name);
    if (it != directory.end()) {
        
        int n=(it->second).size();
        if(n==1){
            directory.erase(name);
        }else{
            cout<<endl;
            cout<<"There is more than 1 number of "<<name<<" in the directory. "<<endl;
            show(directory,name);
            cout<<endl;
            cout<<"Which one do you want to delete ?  Please tell according to number in order (1/2/3...).";
            cin >> number;
            int num=stoi(number);
            for(int i=0;i<(it->second).size();i++){
                
                if(i+1==num){
                   (it->second).erase((it->second).begin()+i);
                    break;
                }            
            }
        }       
        cout<<"Number is deleted."<<endl;
    } else {
        cout << "No entry found with name " << name << endl;
    }
}

// Function to update a person's phone number
void update_entry(map<string, vector<PhoneDirectory>>&directory){
    string name,number;
    int num;
    cout<<endl<<endl;
    cout << "Enter the name: ";
    cin >> name;
    cout<<endl;
    map<string, vector<PhoneDirectory>>::iterator it = directory.find(name);
    if (it != directory.end()) {
        show(directory,name);
        cout<<endl;
        cout<<"Which one do you want to update ?  Please tell according to number in order (1/2/3...).";
        cin >> num;
        cout<<"Enter the new Number: ";
        cin>>number;
        for(int i=0;i<(it->second).size();i++){
          if(i+1==num){
            (it->second)[i].phone_number=number;
            cout<<"Number is Updated."<<endl;
            break;
          }
        }
        cout<<endl;

    } else {
        cout<<endl;
        cout << "No entry found with name " << name << endl;
    }
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