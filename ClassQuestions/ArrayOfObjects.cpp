//Write a program in c++, tu define a class named as students having data varialble, rollno., name, age. sort these students in descending oreder on the basis of age.

#include<bits/stdc++.h>
using namespace std;

class Student {

    int age;
    char name[50];
    int rollNum;
public:
    void InputData() {
        cout << "Please enter age: ";
        cin >> age;
        cin.ignore();
        cout << "Please enter Name: ";
        cin.getline(name, 50);
        cout << "Please enter Roll number: ";
        cin >> rollNum;
    }

    void DisplayData() {
        cout << "Age: " << age << ", Name: " << name << ", Roll No: " << rollNum << "\n";
    }
    void SortByAgeDesc(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].age < arr[j + 1].age) {
                Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
};




int main() {
    const int n = 3;
    Student arr[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        arr[i].InputData();
    }
    arr[0].SortByAgeDesc(arr, n);

    cout << "\nStudents sorted by age (descending):\n";
    for (int i = 0; i < n; i++) {
        arr[i].DisplayData();
    }

    return 0;
}

