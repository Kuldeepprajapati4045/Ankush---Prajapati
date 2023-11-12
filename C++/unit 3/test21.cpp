You are tasked with developing a Phone Book application that allows users to manage their contacts. The application should provide the following functionality:



Create a phone book: This operation creates a new phone book file to store contacts.

Add a contact: This operation allows users to add a new contact to the phone book.

Delete the phone book: This operation deletes the phone book file, removing all contacts.

Read the phone book: This operation reads and displays the contacts stored in the phone book.



Note: This is a sample question asked in a Wipro interview.

Input format :
The user will input their choice from the provided menu options:

1: Create Phone Book

2: Add Contact

3: Delete Phone Book

4: Read Phone Book

0: Exit the application

For the "Add Contact" option, the user will be prompted to enter the contact's name and number.

Output format :
The output displays feedback messages based on the chosen operation:



Phone book creation status: "Phone book created successfully" or "Unable to create a phone book."

Contact addition status: "Contact added successfully" or "Unable to add contact. Phone book not found."

Phone book deletion status: "Phone book deleted successfully" or "Unable to delete phone book."

Phone book reading output: The contacts stored in the phone book will be displayed.



Refer to the sample output for formatting specifications.

Code constraints :
The phone book file name is fixed as "phonebook.txt".

The contact names and numbers can contain any character.

The program should handle any errors that may occur during file operations, such as file not found or permission issues.

Sample test cases :
Input 1 :
1
2
John Doe 9876543210
Jane Smith 8976543210
4
3
0
Output 1 :
Phone book created successfully.
Contact added successfully.
Phone Book:
John Doe 9876543210,Jane Smith 8976543210
Phone book deleted successfully.
Exiting Phone Book Application.



#include <iostream>
#include <fstream>
#include <string>

void createPhoneBook() {
    std::ofstream file("phonebook.txt");
    if (file.is_open()) {
        file.close();
        std::cout << "Phone book created successfully.";
    } else {
        std::cout << "Unable to create phone book.";
    }
}

void addContact() {
    std::ofstream file("phonebook.txt", std::ios::app);
    if (file.is_open()) {
        std::string name, number;
        std::cin.ignore();
        std::getline(std::cin, name);
        std::getline(std::cin, number);
        file << name << "," << number;
        file.close();
        std::cout << "Contact added successfully.";
    } else {
        std::cout << "Unable to add contact. Phone book not found.";
    }
}

void deletePhoneBook() {
    if (std::remove("phonebook.txt") == 0) {
        std::cout << "Phone book deleted successfully.";
    } else {
        std::cout << "Unable to delete phone book.";
    }
}

void readPhoneBook() {
    std::ifstream file("phonebook.txt");
    if (file.is_open()) {
        std::string line;
        std::cout << "Phone Book:" << std::endl;
        while (std::getline(file, line)) {
            std::cout << line;
        }
        file.close();
    } else {
        std::cout << "Unable to open phone book. Phone book not found.";
    }
}

int main() {
    int choice;
    do {
        
        std::cin >> choice;

        switch (choice) {
            case 1:
                createPhoneBook();
                break;
            case 2:
                addContact();
                break;
            case 3:
                deletePhoneBook();
                break;
            case 4:
                readPhoneBook();
                break;
            case 0:
                std::cout << "Exiting Phone Book Application.";
                break;
            default:
                std::cout << "Invalid choice. Please try again.";
        }
        std::cout << std::endl;
    } while (choice != 0);

    return 0;
}