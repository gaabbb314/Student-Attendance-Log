Project Documentation
Title: Student Attendance Log

1. Overview 
The Student Attendance Log is a console-based application for the simplification of attendance management for educators. This application supports multiple classes and allows for efficient tracking of student attendance. It permits users to record attendance, view records, update information, and delete all records in a very straightforward way. Built with C++ and using basic data structures, this project represents a perfect example of how to implement CRUD operations in a very beginner-friendly application.

2. Features
The program includes the following features:

Create: 
1. Start a new attendance log by entering the class name, date, and a list of students.
2. Supports up to 10 classes with 40 students per class.

Read:
1. View attendance records for individual classes.
2. Display all student names associated with a selected class.

Update:
1. Modify the attendance log of an existing class.
2. Replace the old student list with a new one dynamically.

Delete:
1. Clear all attendance records at once. 
2. Simplifies removing outdated or incorrect data without confirmation prompts.


3. Instructions for Using the Program
Using the Features

Step 1: Start Attendance
1. Select option 1 from the menu. 
2. Provide the class name and the date when prompted. 
3. Input the names of students one at a time and type "done" when all names have been entered.

Step 2: View Attendance
1. Select option 2.
2. A list of available classes will be displayed.
3. Enter the number to display attendance for that class.


Select option 3: Update Attendance
1. Select the class to update by entering number for the class
2. Input the new list of names of students and type in "done" when finished

Select option 4: Delete Attendance Records
1. All stored attendance records will be deleted without prompting to delete

Select option 5: Exit the program
1. Select option 5 to close the application.

**********************************************************************
Sample Execution
******************************
Student Attendance Log
******************************
Please choose an option:
1. Start Attendance Check-in
2. View Attendance
3. Update Attendance
4. Delete Attendance Record
5. Exit
******************************
Enter option: 1
******************************
Enter the name of the class: CS-1102
Enter today's date: 12/6/2024
Enter student names (type 'done' to finish):
1. Ian
2. Gabriel
3. Ian Gabriel
4. done
******************************
Attendance has been saved
******************************

******************************
Student Attendance System
******************************
Please choose an option:
1. Start Attendance Check-in
2. View Attendance
3. Update Attendance
4. Delete Attendance Record
5. Exit
******************************
Enter option: 2
******************************
Choose a class to view attendance:
1. CS-1102 / 12/6/2024
Enter the class number to view or 0 to exit: 1
******************************
Class: CS-1102
Date: 12/6/2024
Students:
1. Ian
2. Gabriel
3. Ian Gabriel
******************************

