// 4.Create a structure in C++ containing the details of Students as details below and a main function to execute the structure. 
//             Data Members(properties):
// 	 Name
// Roll No
// Degree
// Hostel
// CurrentCGPA

//             Member Function(behavior):
// addDetails();
// updateDetails();
// updateCGPA();
// updateHostel();
// displaydetails();

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    void addDetails() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore(); // clear newline from buffer
        cout << "Enter Degree: ";
        getline(cin, degree);
        cout << "Enter Hostel: ";
        getline(cin, hostel);
        cout << "Enter Current CGPA: ";
        cin >> currentCGPA;
        cin.ignore();
    }

    void updateDetails() {
        cout << "Update Name: ";
        getline(cin, name);
        cout << "Update Roll No: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Update Degree: ";
        getline(cin, degree);
        cout << "Update Hostel: ";
        getline(cin, hostel);
        cout << "Update Current CGPA: ";
        cin >> currentCGPA;
        cin.ignore();
    }

    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> currentCGPA;
        cin.ignore();
    }

    void updateHostel() {
        cout << "Enter new Hostel: ";
        getline(cin, hostel);
    }

    void displayDetails() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << "\n";
        cout << "Roll No: " << rollNo << "\n";
        cout << "Degree: " << degree << "\n";
        cout << "Hostel: " << hostel << "\n";
        cout << "Current CGPA: " << currentCGPA << "\n";
    }
};

int main() {
    Student s;

    cout << "Add initial details of the student:\n";
    s.addDetails();

    cout << "\nDisplaying details:\n";
    s.displayDetails();

    cout << "\nUpdating hostel:\n";
    s.updateHostel();
    s.displayDetails();

    cout << "\nUpdating CGPA:\n";
    s.updateCGPA();
    s.displayDetails();

    cout << "\nUpdating all details:\n";
    s.updateDetails();
    s.displayDetails();

    return 0;
}
