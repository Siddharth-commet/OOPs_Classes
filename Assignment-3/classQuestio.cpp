// Define 2 classes namely a and b having 2D array as data variable in private scope
// Multiply the matrices of both the classes using friend function
#include <iostream>
using namespace std;

class Matrix2; 
class Matrix1 {
private:
    int rows, cols;
    int arr[50][50];

public:
    Matrix1(int r = 0, int c = 0) {
        rows = r;
        cols = c;
    }

    void input() {
        cout << "Enter elements of Matrix1 (" << rows << "x" << cols << "):\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> arr[i][j];
            }
        }
    }

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << arr[i][j] << " ";
            }
            cout << "\n";
        }
    }
    friend Matrix1 multiply(Matrix1 a, Matrix2 b);
};

class Matrix2 {
private:
    int rows, cols;
    int arr[50][50];

public:
    Matrix2(int r = 0, int c = 0) {
        rows = r;
        cols = c;
    }

    void input() {
        cout << "Enter elements of Matrix2 (" << rows << "x" << cols << "):\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> arr[i][j];
            }
        }
    }

    friend Matrix1 multiply(Matrix1 a, Matrix2 b);
};

Matrix1 multiply(Matrix1 a, Matrix2 b) {
    if (a.cols != b.rows) {
        cout << "Matrix multiplication not possible! (cols of A != rows of B)\n";
        return Matrix1();
    }

    Matrix1 result(a.rows, b.cols);

    for (int i = 0; i < a.rows; i++) {
        for (int j = 0; j < b.cols; j++) {
            result.arr[i][j] = 0;
            for (int k = 0; k < a.cols; k++) {
                result.arr[i][j] += a.arr[i][k] * b.arr[k][j];
            }
        }
    }
    return result;
}

int main() {
    int n, m, p;
    cout << "Enter rows and cols of Matrix1: ";
    cin >> n >> m;
    cout << "Enter cols of Matrix2: ";
    cin >> p;

    Matrix1 A(n, m);
    Matrix2 B(m, p);

    A.input();
    B.input();

    Matrix1 C = multiply(A, B);

    cout << "Resultant Matrix:\n";
    C.display();

    return 0;
}
