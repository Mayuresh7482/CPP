/* 1.Create Student class with data members
	RollNo
	Name
	Course
and implement following
Default constructor
Parameterized constructor
Destructor
Function to accept data
Function for display data
Write main function and create array of students and store data of multiple students in array.
Write Function to find student by Roll No
 */

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int RollNo;
    string Name;
    string Course;

public:
    // Default constructor (optional, initializes to default values)
    Student() {
        RollNo = 0;
        Name = "";
        Course = "";
    }

    // Parameterized constructor
    Student(int rollNo, const string& name, const string& course) {
        RollNo = rollNo;
        Name = name;
        Course = course;
    }

    // Destructor (optional, but good practice for memory management)
    ~Student() {
        cout << "Student object destroyed (RollNo: " << RollNo << ")" << endl;
    }

    // Function to accept student data (improved for user-friendliness)
    void acceptData() {
        cout << "Enter student details:\n";
        cout << "Roll No: ";
        cin >> RollNo;
        cin.ignore(); // Consume newline character (avoids issues with string input)
        cout << "Name: ";
        getline(cin, Name); // Get entire line for name (handles spaces)
        cout << "Course: ";
        getline(cin, Course);
    }

    // Function to display student data
    void displayData() const {
        cout << "Roll No: " << RollNo << endl;
        cout << "Name: " << Name << endl;
        cout << "Course: " << Course << endl;
    }

    // Function to find student by roll number (using const for efficiency)
    static bool findStudentByRollNo(const Student* students, int size, int rollNo) {
        for (int i = 0; i < size; i++) {
            if (students[i].RollNo == rollNo) {
                students[i].displayData(); // Display details of found student
                return true;
            }
        }

        cout << "Student with Roll No " << rollNo << " not found." << endl;
        return false;
    }
};

int main() {
    const int MAX_STUDENTS = 10; // Maximum number of students
    Student students[MAX_STUDENTS];
    int numStudents = 0;

    // Input loop to create student objects (improved error handling)
    while (numStudents < MAX_STUDENTS) {
        int choice;
        cout << "\nMenu:\n";
        cout << "1. Add Student\n";
        cout << "2. Find Student by Roll No\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Consume newline character

        switch (choice) {
            case 1:
                if (numStudents < MAX_STUDENTS) {
                    students[numStudents].acceptData();
                    numStudents++;
                    cout << "Student added successfully." << endl;
                } else {
                    cout << "Maximum number of students reached." << endl;
                }
                break;
            case 2:
                if (numStudents > 0) {
                    int rollNo;
                    cout << "Enter Roll No to find: ";
                    cin >> rollNo;
                    Student::findStudentByRollNo(students, numStudents, rollNo);
                } else {
                    cout << "No students added yet." << endl;
                }
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
