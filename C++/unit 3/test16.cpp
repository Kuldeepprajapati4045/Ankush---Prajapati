Mohana wants to store an integer value in a binary file and retrieve it later. She wants to write a program that allows her to enter an integer value, stores it in a file named "student.dat", and then reads the value from the file.



The methods required are:

a) getFileHandleForWriting(): This should open the file for writing with appropriate permissions and modes in order to write the instances of the struct student.

b) getFileHandlerForReading(): This should open the file for reading with appropriate permissions and modes in order to read the instance of the struct student that has been stored.

c) closeFile() which can take both the input stream and the output stream and close the file.



If you cannot open the file, print "Cannot open file!".

If you cannot close the file, print "Error occurred at reading/writing time!".



The main method prints "Success" if all is well.



Note: This is a sample question asked in a Wipro interview.

Input format :
The input consists of an integer value.

Output format :
The output displays the integer value in the file "student.dat".

The output displays read the stored value from the file and display it on the console.

If any errors occur during file handling, appropriate error messages will be displayed.

Code constraints :
The entered integer value will fit within the range of an integer data type.

The file "student.dat" must be created and accessible for read and write operations.

The program will handle any potential errors during file handling, such as failure to open or close the file.

Sample test cases :
Input 1 :
10
Output 1 :
Stored Value: 10
Success





#include <iostream>
#include <fstream>
using namespace std;

ofstream getFileHandleForWriting() {
    ofstream wf("student.dat", ios::out | ios::binary);

    if (!wf) {
        cout << "Cannot open file!" << endl;
    } else {
        return wf;
    }
}

ifstream getFileHandlerForReading() {
    ifstream rf("student.dat", ios::in | ios::binary);

    if (!rf) {
        cout << "Cannot open file!" << endl;
    } else {
        return rf;
    }
}

void closeFile(ifstream& rf) {
    rf.close();

    if (!rf.good()) {
        cout << "Error occurred at reading time!" << endl;
    }
}

void closeFile(ofstream& wf) {
    wf.close();

    if (!wf.good()) {
        cout << "Error occurred at writing time!" << endl;
    }
}

int main() {
    int userValue;
    cin >> userValue;

    ofstream wf = getFileHandleForWriting();
    wf.write(reinterpret_cast<const char*>(&userValue), sizeof(userValue));
    closeFile(wf);

    ifstream rf = getFileHandlerForReading();
    int storedValue;
    rf.read(reinterpret_cast<char*>(&storedValue), sizeof(storedValue));
    closeFile(rf);

    cout << "Stored Value: " << storedValue << endl;
    cout << "Success" << endl;
    return 0;
}
s