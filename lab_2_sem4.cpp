#include <iostream>
#include <cstdlib>

class Matrix {
private:
    int** data;
    unsigned int m;
    unsigned int n;

public:
    // Конструктор
    Matrix(unsigned int rows, unsigned int cols) : m(rows), n(cols) {
        data = new int*[m];
        for (unsigned int i = 0; i < m; ++i) {
            data[i] = new int[n];
        }
    }

    // Деструктор
    ~Matrix() {
        for (unsigned int i = 0; i < m; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    // Перегрузка оператора доступа по индексу с возможностью изменения элемента
    int* operator[](unsigned int i) {
        return data[i];
    }

    // Метод для заполнения массива случайными значениями от 0 до 9
    void fillRandom() {
        for (unsigned int i = 0; i < m; ++i) {
            for (unsigned int j = 0; j < n; ++j) {
                data[i][j] = rand() % 10;
            }
        }
    }

    // Перегрузка оператора вывода в поток <<
    friend std::ostream& operator<<(std::ostream& os, const Matrix& matrix) {
        for (unsigned int i = 0; i < matrix.m; ++i) {
            for (unsigned int j = 0; j < matrix.n; ++j) {
                os << matrix.data[i][j] << " ";
            }
            os << std::endl;
        }
        return os;
    }

    // Перегрузка операторов +=, +, -=, -, *
    Matrix& operator+=(const Matrix& other) {
        for (unsigned int i = 0; i < m; ++i) {
            for (unsigned int j = 0; j < n; ++j) {
                data[i][j] += other.data[i][j];
            }
        }
        return *this;
    }

    Matrix operator+(const Matrix& other) const {
        Matrix result(m, n);
        for (unsigned int i = 0; i < m; ++i) {
            for (unsigned int j = 0; j < n; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    // Перегрузка операторов != и ==
    bool operator!=(const Matrix& other) const {
        for (unsigned int i = 0; i < m; ++i) {
            for (unsigned int j = 0; j < n; ++j) {
                if (data[i][j] != other.data[i][j]) {
                    return true;
                }
            }
        }
        return false;
    }

    bool operator==(const Matrix& other) const {
        return !(*this != other);
    }
};

int main() {
    Matrix mat1(2, 3);
    mat1.fillRandom();

    Matrix mat2(2, 3);
    mat2.fillRandom();

    std::cout << "Matrix 1:" << std::endl << mat1 << std::endl;
    std::cout << "Matrix 2:" << std::endl << mat2 << std::endl;

    Matrix sum = mat1 + mat2;
    std::cout << "Sum of matrices:" << std::endl << sum << std::endl;

    mat1 += mat2;
    std::cout << "Matrix 1 after addition:" << std::endl << mat1 << std::endl;

    if (mat1 != mat2) {
        std::cout << "Matrices are not equal." << std::endl;
    } else {
        std::cout << "Matrices are equal." << std::endl;
    }

    return 0;
}