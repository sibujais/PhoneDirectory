# PhoneDirectory

PhoneDirectory is a project built using hash maps in C++. It serves as a digital phone directory where users can add, remove, search, and display entries. This project provides an efficient and convenient way to store and manage contact information.

The core data structure used in the PhoneDirectory project is a hash map. A hash map is a container that allows for fast insertion, deletion, and retrieval of key-value pairs. In this case, the keys represent names or unique identifiers of the contacts, and the values store the corresponding phone numbers.

The project allows users to perform the following operations:

Add Entry: Users can add a new contact to the phone directory by providing a name and phone number. The name serves as the key, and the phone number is the associated value. The hash map ensures that the entry is efficiently stored for quick access.

Remove Entry: Users can remove an existing contact from the phone directory by specifying the name. The hash map is used to locate the entry based on the provided name, and it is removed from the directory.

Search Entry: Users can search for a contact by entering the name. The hash map is used to quickly retrieve the associated phone number and display it to the user.

Display Entries: Users can view the entire phone directory, which displays all the stored contacts in a readable format. The hash map is traversed, and each entry is displayed in an organized manner.

The PhoneDirectory project leverages the efficiency of hash maps to provide fast and effective operations for managing contact information. It simplifies the process of storing, retrieving, and managing phone numbers, making it a useful tool for individuals or businesses needing a digital phone directory solution.
