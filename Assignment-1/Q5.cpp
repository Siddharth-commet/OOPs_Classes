// 5.Differentiate between private and public access/scope. Perform the
// question no. 4 with class instead of structure with 
// having the data members private and some member functions in private scope and some in public scope.

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    bool validateCGPA(float cgpa) {
        return (cgpa >= 0.0 && cgpa <= 10.0);
    }

public:
    void addDetails() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Degree: ";
        getline(cin, degree);
        cout << "Enter Hostel: ";
        getline(cin, hostel);

        cout << "Enter Current CGPA: ";
        float cgpa;
        cin >> cgpa;
        cin.ignore();
        if (validateCGPA(cgpa)) {
            currentCGPA = cgpa;
        } else {
            cout << "Invalid CGPA! Setting to 0.\n";
            currentCGPA = 0.0;
        }
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
        float cgpa;
        cin >> cgpa;
        cin.ignore();
        if (validateCGPA(cgpa)) {
            currentCGPA = cgpa;
        } else {
            cout << "Invalid CGPA! No change made.\n";
        }
    }

    void updateCGPA() {
        cout << "Enter new CGPA: ";
        float cgpa;
        cin >> cgpa;
        cin.ignore();
        if (validateCGPA(cgpa)) {
            currentCGPA = cgpa;
        } else {
            cout << "Invalid CGPA! No change made.\n";
        }
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

    cout << "Enter initial details of the student:\n";
    s.addDetails();

    int choice;
    while (true) {
        cout << "\n=== MENU ===\n";
        cout << "1. Update All Details\n";
        cout << "2. Update CGPA\n";
        cout << "3. Update Hostel\n";
        cout << "4. Display Details\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                s.updateDetails();
                break;
            case 2:
                s.updateCGPA();
                break;
            case 3:
                s.updateHostel();
                break;
            case 4:
                s.displayDetails();
                break;
            case 5:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}
