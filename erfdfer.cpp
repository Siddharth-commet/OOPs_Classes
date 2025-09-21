#include <iostream>
#include <cmath>
using namespace std;

class Circle; // Forward declaration for friend

// =================== Rectangle Class ===================
class Rectangle {
    int length, breadth;

public:
    // 1. Constructors
    Rectangle() { // No-argument constructor
        length = 0;
        breadth = 0;
        cout << "Rectangle created with no arguments.\n";
    }

    Rectangle(int side) { // One-argument constructor
        length = breadth = side;
        cout << "Rectangle created with one argument.\n";
    }

    Rectangle(int l, int b) { // Two-argument constructor
        length = l;
        breadth = b;
        cout << "Rectangle created with two arguments.\n";
    }

    // Destructor
    ~Rectangle() {
        cout << "Rectangle destroyed.\n";
    }

    // Area
    int area() const {
        return length * breadth;
    }

    // Setter using 'this' pointer
    void setDimensions(int l, int b) {
        this->length = l;   // 'this' points to the calling object
        this->breadth = b;
    }

    void display() const {
        cout << "Rectangle (" << length << " x " << breadth 
             << ") → Area = " << area() << endl;
    }

    // Friend functions
    friend void swapRect(Rectangle &r1, Rectangle &r2);
    friend int addAreas(const Rectangle &r, const Circle &c);
    friend class Circle; // Friend class
};

// =================== Circle Class ===================
class Circle {
    int radius;

public:
    // Constructors
    Circle() {
        radius = 0;
        cout << "Circle created with no arguments.\n";
    }

    Circle(int r) {
        radius = r;
        cout << "Circle created with one argument.\n";
    }

    // Destructor
    ~Circle() {
        cout << "Circle destroyed.\n";
    }

    double area() const {
        return 3.14159 * radius * radius;
    }

    void display() const {
        cout << "Circle (r = " << radius 
             << ") → Area = " << area() << endl;
    }

    // Friend function
    friend int addAreas(const Rectangle &r, const Circle &c);
};

// =================== Friend Functions ===================

// Swap private values of two Rectangles (manual swap, no STL)
void swapRect(Rectangle &r1, Rectangle &r2) {
    int temp = r1.length;
    r1.length = r2.length;
    r2.length = temp;

    temp = r1.breadth;
    r1.breadth = r2.breadth;
    r2.breadth = temp;
}

// Add area of Rectangle and Circle
int addAreas(const Rectangle &r, const Circle &c) {
    return r.area() + (int)c.area(); // casting circle area to int
}

// =================== Main Function ===================
int main() {
    cout << "\n=== Constructors Demo ===\n";
    Rectangle r1;            // No-arg
    Rectangle r2(5);         // One-arg
    Rectangle r3(3, 7);      // Two-arg
    r1.display();
    r2.display();
    r3.display();

    cout << "\n=== Circle Demo ===\n";
    Circle c1;               // No-arg
    Circle c2(4);            // One-arg
    c1.display();
    c2.display();

    cout << "\n=== Friend Function (Swap) ===\n";
    cout << "Before swap:\n";
    r2.display();
    r3.display();
    swapRect(r2, r3);
    cout << "After swap:\n";
    r2.display();
    r3.display();

    cout << "\n=== Friend Function (Add Areas) ===\n";
    cout << "Rectangle r3 area + Circle c2 area = " 
         << addAreas(r3, c2) << endl;

    cout << "\n=== Pointer to Object & this pointer Demo ===\n";
    Rectangle *ptr = new Rectangle(2, 8); // dynamic allocation
    ptr->display();
    ptr->setDimensions(6, 9); // using this pointer inside setDimensions
    ptr->display();
    delete ptr; // dynamic deallocation

    cout << "\n=== Array of Objects (Dynamic Allocation) ===\n";
    int n = 3;
    Rectangle *arr = new Rectangle[n]; // array of objects
    arr[0].setDimensions(2, 3);
    arr[1].setDimensions(4, 5);
    arr[2].setDimensions(6, 7);

    for (int i = 0; i < n; i++) {
        cout << "Using dot operator: ";
        arr[i].display();
        cout << "Using arrow operator: ";
        (arr + i)->display();
    }
    delete[] arr;

    cout << "\n=== Program End ===\n";
    return 0;
}
