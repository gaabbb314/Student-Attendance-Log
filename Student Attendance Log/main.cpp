#include <iostream>
#include <string>
using namespace std;

//Variables
string classNames[10];
string dates[10];
string studentLists[10][40];
int classCount = 0;
int studentCounts[10] = {0};

// Declarations
void showMenu();
void startAttendance();
void viewAttendance();
void updateAttendance();
void deleteAttendance();

//For showMenu
void showMenu() {
    int option;

    do {
        cout << "******************************" << endl;
        cout << "Student Attendance Log" << endl;
        cout << "******************************" << endl;
        cout << "Please choose an option:" << endl;
        cout << "1. Start Attendance Check-in" << endl;
        cout << "2. View Attendance" << endl;
        cout << "3. Update Attendance" << endl;
        cout << "4. Delete All Records" << endl;
        cout << "5. Exit" << endl;
        cout << "******************************" << endl;
        cout << "Enter option: ";
        cin >> option;
        cin.ignore();

        switch (option) {
            case 1:
                startAttendance();
                break;
            case 2:
                viewAttendance();
                break;
            case 3:
                updateAttendance();
                break;
            case 4:
                deleteAttendance();
                break;
            case 5:
                cout << "******************************" << endl;
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "******************************" << endl;
                cout << "Invalid choice." << endl;
        }
    } while (option != 5);
}

// For startAttendance
void startAttendance() {
    if (classCount >= 10) {
        cout << "Reached the maximum number of classes (10)." << endl;
        return;
    }

    cout << "******************************" << endl;
    cout << " " << endl;
    cout << "Enter the name of the class: ";
    getline(cin, classNames[classCount]);


    cout << "Enter today's date: ";
    getline(cin, dates[classCount]);

    int count = 0;
    string studentName;

    cout << "Enter student names (type 'done' to finish):" << endl;
    cout << "******************************" << endl;
    while (count < 40) {
        cout << count + 1 << ". ";
        getline(cin, studentName);
        if (studentName == "done") break;
        studentLists[classCount][count++] = studentName;
    }

    studentCounts[classCount++] = count;
    cout << "******************************" << endl;
    cout << "Attendance has been saved!" << endl;
    cout << " " << endl;
}

// For viewAttendance
void viewAttendance() {
    if (classCount == 0) {
        cout << "******************************" << endl;
        cout << "No Record yet." << endl;
        cout << " " << endl;
        return;
    }

    cout << "******************************" << endl;
    cout << " " << endl;
    cout << "Choose a class to view attendance:" << endl;
    for (int i = 0; i < classCount; i++) {
        cout << i + 1 << ". " << classNames[i] << " / " << dates[i] << endl;
    }

    int choice;
    cout << " " << endl;
    cout << "Enter the class number to view or 0 to exit: ";
    cin >> choice;
    cin.ignore();

    if (choice == 0 || choice > classCount) return;

    int index = choice - 1;
    cout << "******************************" << endl;
    cout << "Class: " << classNames[index] << endl;
    cout << "Date: " << dates[index] << endl;
    cout << " " << endl;
    cout << "Students:" << endl;
    for (int i = 0; i < studentCounts[index]; i++) {
        cout << i + 1 << ". " << studentLists[index][i] << endl;
    }
}

// For updateAttendance
void updateAttendance() {
    if (classCount == 0) {
        cout << "******************************" << endl;
        cout << "No Record yet." << endl;
        cout << " " << endl;
        return;
    }

    cout << " " << endl;
    cout << "******************************" << endl;
    cout << "Choose a class to update attendance:" << endl;
    for (int i = 0; i < classCount; i++) {
        cout << i + 1 << ". " << classNames[i] << " / " << dates[i] << endl;
    }

    int choice;
    cout << " " << endl;
    cout << "Enter the class number to update or 0 to exit: ";
    cin >> choice;
    cin.ignore();

    if (choice == 0 || choice > classCount) return;

    int index = choice - 1;
    cout << " " << endl;
    cout << "******************************" << endl;
    cout << "Updating attendance for " << classNames[index] << " / " << dates[index] << endl;

    studentCounts[index] = 0;
    string studentName;

    cout << "Enter new student names (type 'done' to finish):" << endl;
    while (studentCounts[index] < 40) {
        cout << studentCounts[index] + 1 << ". ";
        getline(cin, studentName);
        if (studentName == "done") break;
        studentLists[index][studentCounts[index]++] = studentName;
    }
    cout << "******************************" << endl;
    cout << "Attendance has been updated!" << endl;
    cout << " " << endl;
}

// For deleteAttendance
void deleteAttendance() {
    if (classCount == 0) {
        cout << "No Record yet." << endl;
        return;
    }
    classCount = 0;
    for (int i = 0; i < 10; i++) {
        studentCounts[i] = 0;
        for (int j = 0; j < 40; j++) {
            studentLists[i][j] = "";
        }
    }
    cout << "******************************" << endl;
    cout << "Records has been deleted successfully!" << endl;
    cout << " " << endl;
}

int main() {
    showMenu();
    return 0;
}
