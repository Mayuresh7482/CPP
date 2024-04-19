#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    vector<vector<int>> data;

public:
    // Default constructor
    Matrix() : rows(3), cols(3) {
        data.resize(rows);
        for (int i = 0; i < rows; ++i) {
            data[i].resize(cols, 0);
        }
        cout << "Default constructor: Created 3x3 matrix." << endl;
    }

    // Parameterized constructor
    Matrix(int r, int c) : rows(r), cols(c) {
        data.resize(rows);
        for (int i = 0; i < rows; ++i) {
            data[i].resize(cols, 0);
        }
        cout << "Parameterized constructor: Created " << rows << "x" << cols << " matrix." << endl;
    }

    // Copy constructor (deep copy)
    Matrix(const Matrix& other) : rows(other.rows), cols(other.cols) {
        data.resize(rows);
        for (int i = 0; i < rows; ++i) {
            data[i].resize(cols);
            copy(other.data[i].begin(), other.data[i].end(), data[i].begin());
        }
        cout << "Copy constructor: Created a copy of " << rows << "x" << cols << " matrix." << endl;
    }

    // Destructor
    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            data[i].clear();
        }
        data.clear();
        cout << "Destructor: Freed memory for " << rows << "x" << cols << " matrix." << endl;
    }

    // Overloaded + operator for matrix addition
    Matrix operator+(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            cerr << "Error: Matrices must have the same dimensions for addition." << endl;
            return *this; // Return current object on error
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    // Overloaded ! operator for matrix transpose (assumes square matrix)
    Matrix operator!() const {
        if (rows != cols) {
            cerr << "Error: Transpose only defined for square matrices." << endl;
            return *this; // Return current object on error
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[j][i] = data[i][j];
            }
        }
        return result;
    }

    // Overloaded >> operator for user input (size and elements)
    friend istream& operator>>(istream& in, Matrix& mat) {
        cout << "Enter number of rows: ";
        in >> mat.rows;
        cout << "Enter number of columns: ";
        in >> mat.cols;

        mat.data.resize(mat.rows);
        for (int i = 0; i < mat.rows; ++i) {
            mat.data[i].resize(mat.cols);
            cout << "Enter elements for row " << i + 1 << ": ";
            for (int j = 0; j < mat.cols; ++j) {
                in >> mat.data[i][j];
            }
        }
        return in;
    }

    // Overloaded << operator for matrix display
    friend ostream& operator<<(ostream& out, const Matrix& mat) {
        for (int i = 0; i < mat.rows; ++i) {
            for (int j = 0; j < mat.cols; ++j) {
                out << mat.data[i][j] << " ";
            }
            cout << endl;
                }
        return out;
    }
};

int main() {
    // Test default constructor
    Matrix m1;

    // Test parameterized constructor
    Matrix m2(2, 4);

    // Test copy constructor
    Matrix m3(m2);

    // Test matrix input
    cout << "Enter elements for matrix m4:" << endl;
    Matrix m4;
    cin >> m4;

    // Test matrix addition (assuming m1 and m4 have compatible sizes)
    Matrix m5 = m1 + m4;

    // Test matrix transpose (assuming m2 is square)
    Matrix m6 = !m2;

    // Test matrix output
    cout << "Matrix m1:" << endl;
    cout << m1 << endl;

    cout << "Matrix m2:" << endl;
    cout << m2 << endl;

    cout << "Matrix m3 (copy of m2):" << endl;
    cout << m3 << endl;

    cout << "Matrix m4 (user input):" << endl;
    cout << m4 << endl;

    // Check if addition result is valid (assuming m1 and m4 were compatible)
    if (m5.rows > 0 && m5.cols > 0) {
        cout << "Matrix m5 (m1 + m4):" << endl;
        cout << m5 << endl;
    }

    // Check if transpose result is valid (assuming m2 was square)
    if (m6.rows > 0 && m6.cols > 0) {
        cout << "Matrix m6 (transpose of m2):" << endl;
        cout << m6 << endl;
    }

    return 0;
}

